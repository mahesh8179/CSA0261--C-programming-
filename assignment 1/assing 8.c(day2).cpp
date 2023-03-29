#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a=0,b=0,c=0;
	int arr[7]={5,2,7,7,5,5,2};
	for(i=0;i<7;i++)
	{
	    if(arr[i]==5)
	    {
	    	a=a+1;
		}
		else if(arr[i] == 2)
		{
			b=b+1;
		}
		else
		{
			c=c+1;
		}
	}
	printf("Element | frequency");
	printf("\n  5        %d ",a);
	printf("\n  2        %d",b);
	printf("\n  7        %d ",c);
	return 0;
}
