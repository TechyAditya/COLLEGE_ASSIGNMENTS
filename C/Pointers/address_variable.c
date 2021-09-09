#include<stdio.h>
int main()
{
    int a =5;
    int *b=&a;
    printf("value of a = %d \n",*b);
    printf("address of a = %u \n",b);
    printf("address of a = %u \n",&a);
return 0;
}