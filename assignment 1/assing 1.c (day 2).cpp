#include <stdio.h>
int main ()
{
    int n = 0, i = 0, largest1 = 0, largest2 = 0, temp = 0;
 
    printf ("Enter the size of the array\n");
    scanf ("%d", &n);
    int array[n];
    printf ("Enter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf ("%d", &array[i]);
    }
 
    printf ("The array elements are : \n");
    for (i = 0; i < n; i++)
    {
        printf ("%d\t", array[i]);
    }
 
    printf ("\n");
 
    largest1 = array[0];
    largest2 = array[1];
 
    if (largest1 < largest2)
    {
        temp = largest1;
        largest1 = largest2;
        largest2 = temp;
    }
 
    for (int i = 2; i < n; i++)
    {
        if (array[i] > largest1)
        {
            largest2 = largest1;
            largest1 = array[i];
        }
        else if (array[i] > largest2 && array[i] != largest1)
        {
            largest2 = array[i];
        }
    }
 
    printf ("The FIRST LARGEST = %d\n", largest1);
    printf ("THE SECOND LARGEST = %d\n", largest2);
 
    return 0;
}#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the array elements :");
    int a[n];                    //Array Declaration
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)         //Sorting Array
    {
        int temp;
        for(int j=i+1; j<n ;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The second smallest element is %d",a[n-2]);   //Accessing the smallest element
    printf("\n");
    printf("The second largest element is %d",a[1]);      //Accessing the largest element
    return 0;
}
