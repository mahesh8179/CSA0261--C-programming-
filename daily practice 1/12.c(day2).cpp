#include<stdio.h>
 
int main()
{
 float a[100], sum=0, avg;
 int i, n;
  
 printf("Plesae Enter Size of An Array : ");
 scanf("%d", &n);
  
 /* Reading array */
 printf("Enter array elements or numbers:\n");
 for(i=0; i< n; i++)
 {
  printf("Enter element a[%d] = ", i);
  scanf("%f", &a[i]);
 }
  
 /* Finding sum */
 for(i=0; i< n; i++)
 {
  sum = sum + a[i];
 }
  
 /* Calculating average */
 avg = sum/n;
  
 /* Displaying Result */
 printf("Sum is %f\n", sum);
 printf("Average is %f", avg);
  
 return 0;
}
