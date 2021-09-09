#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, n, i;
    printf("Enter the size of array: \n");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
       printf("Enter element %d: \n",i+1);
       scanf("%d",(ptr+i));
    }
    printf("Entered array is:\n");
    for(i=0;i<n;i++)
    printf("%d ",*(ptr+i));

    
    return 0;
}