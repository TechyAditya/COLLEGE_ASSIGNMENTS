#include<stdio.h>
int main()
{
    int a=35;
    int *b=&a;
    int **c=&b;
    printf("address of a is : %u \n",&b);
    printf("value of a is : %d \n",*b);
    printf("value of b is : %d \n",*c);
    printf("value of a is : %d \n",**c);
    printf("value of b is : %d \n",b);
return 0;
}