#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to store the DataFrame name and corresponding file path
typedef struct DataFrame {
    char name[100];
    char filePath[200];
} DataFrame;

// Function to store DataFrame information
typedef struct DataFrameStore {
    DataFrame* dataFrames;
    int count;
} DataFrameStore;

// Function to initialize the DataFrame store
DataFrameStore createStore() {
    DataFrameStore store;
    store.dataFrames = NULL;
    store.count = 0;
    return store;
}

// Function to add a DataFrame to the store
void adddfname(DataFrameStore* store, const char* name, const char* filePath) {
    store->dataFrames = (DataFrame*)realloc(store->dataFrames, (store->count + 1) * sizeof(DataFrame));
    strcpy(store->dataFrames[store->count].name, name);
    strcpy(store->dataFrames[store->count].filePath, filePath);
    store->count++;
}

char* findDataFrameNameByFilePath(DataFrameStore* store, const char* filePath) {
    for (int i = 0; i < store->count; i++) {
        if (strcmp(store->dataFrames[i].filePath, filePath) == 0) {
            return store->dataFrames[i].name; // Return the name of the matching DataFrame
        }
    }
    return NULL; // Return NULL if no match is found
}

// Function to check if two CSV files have the same number of rows
void haveSameNumberOfRows(const char* file1, const char* file2) {
    int rowCount1 = 0, rowCount2 = 0;
    char ch;
    FILE *fp1 = fopen(file1, "r"), *fp2 = fopen(file2, "r");

    if (!fp1 || !fp2) {
        printf("Error opening files.");
        
    }

    // Count rows in the first file
    while ((ch = fgetc(fp1)) != EOF) {
        if (ch == '\n') rowCount1++;
    }

    // Count rows in the second file
    while ((ch = fgetc(fp2)) != EOF) {
        if (ch == '\n') rowCount2++;
    }

    fclose(fp1);
    fclose(fp2);

     if(rowCount1 == rowCount2){
      printf("Error: concat not compatible");
        exit(EXIT_FAILURE);
     }
}

// Function to check if two CSV files have the same number of columns
int haveSameNumberOfColumns(const char* file1, const char* file2) {
    int colCount1 = 0, colCount2 = 0;
    char ch;
    FILE *fp1 = fopen(file1, "r"), *fp2 = fopen(file2, "r");

    if (!fp1 || !fp2) {
        printf("Error opening files.");
        return 0;
    }

    // Read the first line of the first file to count columns
    while ((ch = fgetc(fp1)) != EOF && ch != '\n') {
        if (ch == ',') colCount1++;
    }

    // Read the first line of the second file to count columns
    while ((ch = fgetc(fp2)) != EOF && ch != '\n') {
        if (ch == ',') colCount2++;
    }

    fclose(fp1);
    fclose(fp2);

    return (colCount1 + 1) == (colCount2 + 1); // Adding 1 because the column count is number of commas + 1
}

// Function to check if a certain column exists in both CSVs
void columnExistsInBoth(const char* file1, const char* file2, const char* columnName) {
    char buffer[1024];
    int columnExists1 = 0, columnExists2 = 0;
    FILE *fp1 = fopen(file1, "r"), *fp2 = fopen(file2, "r");

    if (!fp1 || !fp2) {
        printf("Error opening files.");
        
    }

    // Read the first line of the first file and check for the column name
    if (fgets(buffer, sizeof(buffer), fp1)) {
        char* token = strtok(buffer, ",");
        while (token) {
            if (strcmp(token, columnName) == 0) {
                columnExists1 = 1;
                break;
            }
            token = strtok(NULL, ",");
        }
    }

    // Read the first line of the second file and check for the column name
    if (fgets(buffer, sizeof(buffer), fp2)) {
        char* token = strtok(buffer, ",");
        while (token) {
            if (strcmp(token, columnName) == 0) {
                columnExists2 = 1;
                break;
            }
            token = strtok(NULL, ",");
        }
    }

    fclose(fp1);
    fclose(fp2);

    if(!( columnExists1 && columnExists2)){
         printf("Merging is not compatible with given column\n");
        exit(EXIT_FAILURE);
    };
}

