#include <stdio.h>
#include <string.h>

void remove_chars(char *str1, char *str2);

int main() {
    char str1[100], str2[100];
    
    printf("Enter the first string: ");
    gets(str1);
    
    printf("Enter the second string: ");
    gets(str2);
    
    remove_chars(str1, str2);
    
    printf("The modified second string is: %s\n", str2);
    
    return 0;
}

void remove_chars(char *str1, char *str2) {
    int i, j, k;
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    for (i = 0; i < len2; i++) {
        for (j = 0; j < len1; j++) {
            if (str2[i] == str1[j]) {
                for (k = i; k < len2; k++) {
                    str2[k] = str2[k+1];
                }
                len2--;
                i--;
                break;
            }
        }
    }
}

