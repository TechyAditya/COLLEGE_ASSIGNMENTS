#include<stdio.h>
int fibonacci(int a);
int main()
{
    int n;
    printf("enter the value of n : \n");
    scanf("%d",&n);
    printf("fibonacci series : %d",fibonacci(n));
return 0;
}

int fibonacci(int n)
{
        if (n <= 1)
      return n;
   return fibonacci(n-1) + fibonacci(n-2);
}