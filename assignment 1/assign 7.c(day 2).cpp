#include <stdio.h>
 
int main()
{
    int size;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    printf("Enter Array Elements: ");
    int arr[size];
 
    //Input array elements
    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);
    printf("Entered Array is: ");
    for(int i=0;i<size;i++)
    printf("%d ",arr[i]);
 
    //Start points at the first element and end points at the last element
    int start=0,end=size-1;
    while(start<end)
    {
        //Swapping elements
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
 
        //Incrementing start  and decrementing end
        start++;
        end--;
    }
 
    //Printing reversed array
    printf("\nReversed array is: ");
    for(int i=0;i<size;i++)
    printf("%d ",arr[i]);
    return 0;
}
