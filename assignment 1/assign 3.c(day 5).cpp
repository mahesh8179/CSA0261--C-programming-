#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

int main() {
    FILE *in_file, *out_file;
    char in_filename[] = "input.txt";
    char out_filename[] = "output.txt";
    char line[MAX_LINE_LENGTH];
    char *p;

    in_file = fopen(in_filename, "r"); 
    
    if (in_file == NULL) { 
        printf("Error opening file %s\n", in_filename);
        return 1;
    }

    out_file = fopen(out_filename, "w"); 
    
    if (out_file == NULL) { 
        printf("Error opening file %s\n", out_filename);
        return 1;
    }

    while (fgets(line, MAX_LINE_LENGTH, in_file) != NULL) {
        p = strstr(line, "red"); 
        while (p != NULL) { 
            strncpy(p, "blue", strlen("blue"));
            p = strstr(p + strlen("blue"), "red");
        }
        fputs(line, out_file); 
    }

    fclose(in_file); 
    fclose(out_file);

    return 0;
}

