#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

int main() {
    FILE *fp;
    char filename[MAX_LINE_LENGTH];
    char search_string[MAX_LINE_LENGTH];
    char line[MAX_LINE_LENGTH];

    
    printf("Enter the name of the file to search: ");
    scanf("%s", filename);
    printf("Enter the search string: ");
    scanf("%s", search_string);

    fp = fopen(filename, "r"); 
    
    if (fp == NULL) { 
        printf("Error opening file %s\n", filename);
        return 1;
    }

    while (fgets(line, MAX_LINE_LENGTH, fp) != NULL) { 
        if (strstr(line, search_string) != NULL) { 
            printf("%s", line); 
        }
    }

    fclose(fp); 
 return 0;
}

