#include <stdio.h>
#include <string.h>

void reverse_string(char *);

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Original string: %s", str);

    reverse_string(str);

    printf("Reversed string: %s", str);

    return 0;
}

void reverse_string(char *str)
{
    char *start = str;
    char *end = str + strlen(str) - 1;

    while (start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

