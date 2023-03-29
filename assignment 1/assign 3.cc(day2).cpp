#include<stdio.h>
int main()
{
   int i,j,a,n,counter,ave,number[30];
   printf ("Enter the value of N");
   scanf ("%d", &n);
   printf ("Enter the numbers ");
   for (i=0; i<n; i++)
   {
        scanf ("%d",&number[i]);
   }
   for (i=0; i<n; i++)
   {
      for (j=i+1; j<n; j++)
	  {
         if (number[i] > number[j])
		 {
            a = number[i];
            number[i] = number[j];
            number[j] = a;
         }
      }
   }
   printf ("\nThe numbers arranged in descending order are given below");
   for (i=0; i<n; i++)
   {
      printf ("%d",number[i]);
   }
   printf ("\nThe 2nd largest number is = %d", number[1]);
   printf ("\nThe 2nd smallest number is = %d", number[n-2]);
   
}
