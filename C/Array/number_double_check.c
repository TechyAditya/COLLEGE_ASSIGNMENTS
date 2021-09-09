#include<stdio.h>
int main()
{
    int a[10]={0};
    int x,rem=0;
    printf("enter a number : ");
    scanf("%d",&x);
    while(x!=0)
    {
        rem=x%10;
        if(a[rem]==1)
        {
            break;
        }
        x=x/10;
    }
    if(x>0)
    {
        printf("yes there is a repition");
    }
    else
    {
        printf("no there is a repition");
    }
return 0;
}