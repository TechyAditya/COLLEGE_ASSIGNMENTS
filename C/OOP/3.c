#include <stdio.h>

int main()    
{    
    int n,i,*ptr;
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: \n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Entered array is: \n");
    for(i=0;i<n;i++)
    printf("%d ",arr[i]); 
    ptr=&arr[n-1];
    printf("\n");
    printf("Reversed array is: \n");
    for(i=n-1;i>=0;i--)
    {
    printf("%d ",*ptr);
    ptr--;
    }
    return 0;
}