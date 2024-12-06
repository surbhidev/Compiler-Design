#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void strip_quotes(char *str) {
    size_t len = strlen(str);
    if (len > 1 && str[0] == '\'' && str[len - 1] == '\'') {
        // Shift string left to remove the leading quote
        memmove(str, str + 1, len - 2);
        str[len - 2] = '\0'; // Null-terminate after removing the trailing quote
    }
}

// Function to check if a file exists and is accessible
int is_file_accessible(const char *filepath) {
    
    FILE *file = fopen(filepath, "r");
    if (file) {
        fclose(file);
        return 1; // File is accessible
    }
    return 0; // File is not accessible
}

void process_csvfile(const char *csvfile) {
    // Create a mutable copy of csvfile
    char file_name[512];
    strncpy(file_name, csvfile, sizeof(file_name) - 1);
    file_name[sizeof(file_name) - 1] = '\0'; // Ensure null termination

    // Strip surrounding quotes
    strip_quotes(file_name);

    // Define the prefix path
    const char *prefix = "../build/";

    // Buffer to store the full path
    char full_path[512];

    // Concatenate the prefix and the file name
    snprintf(full_path, sizeof(full_path), "%s%s", prefix, file_name);

    // Check if the file is accessible
    if (is_file_accessible(full_path)) {
    } else {
        printf("Error: File '%s' does not exist or is not accessible.\n", full_path);
        exit(EXIT_FAILURE);
    }
}
// Function to check if the delimiter is valid
void is_valid_delimiter(const char *delimiter) {
    char sep[512];
    strncpy(sep, delimiter, sizeof(sep) - 1);
    sep[sizeof(sep) - 1] = '\0';
    // Strip surrounding quotes
    strip_quotes(sep);
     if(!(sep && strlen(sep) == 1 && isprint(sep[0]))){
       printf("Error: Invalid delimiter %s. Delimiter must be a single printable character.\n", delimiter);
       exit(EXIT_FAILURE);
     }
}

// Function to verify if the header parameter points to a valid row
int is_valid_header_row(const char *csvfile, int header_row) {
    char file_name[512];
    strncpy(file_name, csvfile, sizeof(file_name) - 1);
    file_name[sizeof(file_name) - 1] = '\0'; // Ensure null termination

    // Strip surrounding quotes
    strip_quotes(file_name);

    // Define the prefix path
    const char *prefix = "../build/";

    // Buffer to store the full path
    char full_path[512];

    // Concatenate the prefix and the file name
    snprintf(full_path, sizeof(full_path), "%s%s", prefix, file_name);
    FILE *file = fopen(full_path, "r");
    if (!file) return 0;

    char line[1024];
    int current_row = 0;

    while (fgets(line, sizeof(line), file)) {
        if (current_row == header_row) 
        {      
               return 1;
            } 
        
        current_row++;
    }

    fclose(file);
    printf("Error: Invalid header row %d in file '%s'.\n", header_row, file_name);
    exit(EXIT_FAILURE);
    return 0; // Header row not found
}


