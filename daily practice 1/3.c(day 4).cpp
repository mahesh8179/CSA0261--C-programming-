#include<stdio.h>
struct book
{
	char title[20];
	char authour[25];
	float price;
}p1;
main()
{
	scanf("%s%s%f",&p1.title,&p1.authour,&p1.price);
	printf("%s%s%f",p1.title,&p1.authour,p1.price);
}
