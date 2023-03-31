#include<stdio.h>
#include<conio.h>
int main()
{
struct student
{
int rollno;
char name[20];
int m1,m2,m3;
float percent;
};
struct student s[20],t;
int i,j,n;
printf("\n enter the limit");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n enter the roll no\n");
scanf("%d",&s[i].rollno);
printf("\n enter the name \n");
scanf("%s",s[i].name);
printf("\n enter the mark=");
scanf("%d",&s[i].m1);
printf("\n enter the mark=");
scanf("%d",&s[i].m2);
printf("\n enter the mark=");
scanf("%d",&s[i].m3);
s[i].percent=(s[i].m1+s[i].m2+s[i].m3)/3;
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(s[i].percent<s[j].percent)
{
t=s[i];
s[i]=s[j];
s[j]=t;
}
}
}
printf("\n display in desending order\n");
for(i=0;i<n;i++)
{
printf("\n rollno=%d",s[i].rollno);
printf("\n name=%s",s[i].name);
printf("\n mark1=%d",s[i].m1);
printf("\n mark2=%d",s[i].m2);
printf("\n mark3=%d",s[i].m3);
printf("\n percent=%f",s[i].percent);
}
getch();
}
