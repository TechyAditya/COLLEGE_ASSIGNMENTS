#include <stdio.h>

int sum(int *a,int *b)
{
    return *a+*b;
}

int main()
{
    int a,b,*pa,*pb;
    printf("Enter two numbers to perform addition: ");
    scanf("%d %d",&a,&b);
    pa=&a;
    pb=&b;
    printf("sum of %d and %d is: %d",a,b,sum(pa,pb));

    return 0;
}