
#include<stdio.h>
int main()
{
    int i=1,n,fact;
    printf("enter the number : \n");
    scanf("%d",&n);
    while(i<=n)
    {
        fact += n*i;
        i++;
    }
    printf("fact of %d  is =%d",n,fact);
    
return 0;
}