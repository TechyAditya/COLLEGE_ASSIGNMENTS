#include<stdio.h>
int main()
{
    int i,n, sum;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        sum+=i*n;
        
    }
    printf("the sum of multiplication of n table is : %d",sum);
return 0;
}

