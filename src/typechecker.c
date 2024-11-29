#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *double_quote_remover(char *csv_file)
{
    int n = strlen(csv_file);
    char *result;

    if (csv_file[0] == '\'' && csv_file[n - 1] == '\'')  
    {
        result = (char *)malloc((n - 1) * sizeof(char));  
        if (result == NULL) 
        {
            fprintf(stderr, "Memory allocation failed\n");
            exit(1);
        }
        strncpy(result, csv_file + 1, n - 2);  
        result[n - 2] = '\0'; 
    }
    else
    {
        result = (char *)malloc((n + 1) * sizeof(char)); 
        if (result == NULL) {
            fprintf(stderr, "Memory allocation failed\n");
            exit(1);
        }
        strcpy(result, csv_file);  
    }

    return result; 
}


