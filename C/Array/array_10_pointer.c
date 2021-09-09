#include<stdio.h>
int main()
{
    int arr[10];
    int *ptr=arr;
    ptr=ptr+2;
    if(&arr[2]==ptr)
    {
        printf("true");
    }
    else
    printf("not same location");
return 0;
}