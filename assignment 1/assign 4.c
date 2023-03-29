#include <stdio.h>
#include <string.h>

int main() {
   char str[100];
   int count = 0;

   printf("Enter a string: ");
   gets(str);

   for (int i = 0; i < strlen(str); i++) {
      if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
         count++;
      }
   }

   printf("Number of vowels in the string: %d\n", count);

   return 0;
}
