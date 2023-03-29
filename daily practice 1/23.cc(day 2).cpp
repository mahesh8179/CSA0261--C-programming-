#include <stdio.h>

void remove_char(char *str, char c) {
    int i, j;
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] != c) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char str[100];
    char c;
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    getchar();
    printf("Enter a character to remove: ");
    scanf("%c", &c);
    remove_char(str, c);
    printf("String after removing '%c': %s\n", c, str);
    return 0;
}
