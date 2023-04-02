#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

int main() {
  
    FILE* input_file = fopen("input.txt", "r");
    if (!input_file) {
        printf("Failed to open input file\n");
        return 1;
    }

    FILE* error_log_file = fopen("error_log.txt", "w");
    if (!error_log_file) {
        printf("Failed to open error log file\n");
        return 1;
    }


    char line[MAX_LINE_LENGTH];
    while (fgets(line, MAX_LINE_LENGTH, input_file)) {
  
        if (strstr(line, "error")) {
            
            fputs(line, error_log_file);
        }
    }

 
    fclose(input_file);
    fclose(error_log_file);


    error_log_file = fopen("error_log.txt", "r");
    if (!error_log_file) {
        printf("Failed to open error log file\n");
        return 1;
    }

    
    printf("Error log contents:\n");
    while (fgets(line, MAX_LINE_LENGTH, error_log_file)) {
        printf("%s", line);
    }

    fclose(error_log_file);

    return 0;
}

