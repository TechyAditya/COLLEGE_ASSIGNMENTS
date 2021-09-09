#include<stdio.h>
void even();
void odd();
int n=1;
int main()
{
    odd();
    return 0;
}
void even()
{
    if(n<=10)
    {
        printf("%d \n",n-1);
        n++;
    }
    odd();
}
void odd()
{
    if(n<=10)
    {
        printf("%d \n",n+1);
        n++;
    }
    even();
}

