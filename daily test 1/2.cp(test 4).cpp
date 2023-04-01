#include<stdio.h>
int main()
{
  	float width, length, Area; 
 
  	printf ("\n Please Enter the Width of a Rectangle  :  ");
  	scanf ("%f",&width);

  	printf ("\n Please Enter the Length of a Rectangle :  ");
  	scanf ("%f",&length);
	   
  	Area = length * width;
 
	printf("\n The Area of a Rectangle =  %.2f", Area);
 
  	return 0;
}
