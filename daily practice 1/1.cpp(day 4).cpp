#include<stdio.h>
struct person
{
	char name[20];
	int age;
	float height;
}p1;
main()
{
	scanf("%s%d%f",&p1.name,&p1.age,&p1.height);
	printf("%s%d%f",p1.name,&p1.age,p1.height);
}
