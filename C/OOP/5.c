#include <stdio.h>

int main()
{
    int n,*ptr;
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    int arr[n],i,j,lnum,t;
    printf("Enter the elements of the array: \n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    ptr=arr;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (*(ptr + j) < *(ptr + i))
            {
                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }
    printf("Array after sorting: \n");
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
    
    return 0;
}