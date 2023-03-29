#include <stdio.h>
#include <string.h>

void reverse_string(char str[]) {
    int length = strlen(str);
    char temp;

    for (int i = 0; i < length/2; i++) {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

int is_palindrome(char str[]) {
    char rev_str[100];
    strcpy(rev_str, str);
    reverse_string(rev_str);

    if (strcmp(str, rev_str) == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    if (is_palindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

