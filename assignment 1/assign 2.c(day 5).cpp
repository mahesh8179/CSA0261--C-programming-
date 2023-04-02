#include <stdio.h>

int main() {
    FILE *fp;
    char filename[] = "data.bin";
    int data;
    
    fp = fopen(filename, "rb"); // open binary file for reading
    
    if (fp == NULL) { // check for errors opening the file
        printf("Error opening file %s\n", filename);
        return 1;
    }
    
    while (fread(&data, sizeof(int), 1, fp) == 1) { // read integers from file
        printf("%d\n", data); // print each integer to the console
    }
    
    fclose(fp); // close file
    
    return 0;
}

