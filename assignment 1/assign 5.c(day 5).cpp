#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define NUM_LETTERS 26

int main() {
    FILE *in_file, *out_file;
    char in_filename[] = "data.txt";
    char out_filename[] = "statistics.txt";
    int letter_counts[NUM_LETTERS] = {0};
    int c;

    in_file = fopen(in_filename, "r"); 
    
    if (in_file == NULL) { 
        printf("Error opening file %s\n", in_filename);
        return 1;
    }

    while ((c = fgetc(in_file)) != EOF) { 
        if (isalpha(c)) { 
            letter_counts[tolower(c) - 'a']++; 
        }
    }

    fclose(in_file); 

    out_file = fopen(out_filename, "w"); 
    
    if (out_file == NULL) { 
        printf("Error opening file %s\n", out_filename);
        return 1;
    }

    for (int i = 0; i < NUM_LETTERS; i++) { 
        fprintf(out_file, "%c: %d\n", 'a' + i, letter_counts[i]);
    }

    fclose(out_file); // close output file

    return 0;
}

