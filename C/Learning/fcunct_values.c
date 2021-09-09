#include<stdio.h>
int sum(int a, int b);
void display();
int main()
{
    int c;
    c=sum(6,8);
    display();
    
return 0;
}
int sum(int a, int b)
{
    int sum;
    sum= a+b;
}
void display()
{
    int sum;
    printf("sum of a and b is %d",sum);
}