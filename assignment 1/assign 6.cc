#include <stdio.h>

int main() {
   int amount, notes;

   printf("Enter an amount: ");
   scanf("%d", &amount);

   printf("The minimum number of notes required for Rs. %d is:\n", amount);

   notes = amount / 500;
   if (notes > 0) {
      printf("%d x Rs. 500\n", notes);
   }
   amount = amount % 500;

   notes = amount / 100;
   if (notes > 0) {
      printf("%d x Rs. 100\n", notes);
   }
   amount = amount % 100;

   notes = amount / 50;
   if (notes > 0) {
      printf("%d x Rs. 50\n", notes);
   }
   amount = amount % 50;

   notes = amount / 20;
   if (notes > 0) {
      printf("%d x Rs. 20\n", notes);
   }
   amount = amount % 20;

   notes = amount / 10;
   if (notes > 0) {
      printf("%d x Rs. 10\n", notes);
   }
   amount = amount % 10;

   notes = amount / 5;
   if (notes > 0) {
      printf("%d x Rs. 5\n", notes);
   }
   amount = amount % 5;

   notes = amount / 2;
   if (notes > 0) {
      printf("%d x Rs. 2\n", notes);
   }
   amount = amount % 2;

   notes = amount / 1;
   if (notes > 0) {
      printf("%d x Rs. 1\n", notes);
   }

   return 0;
}
