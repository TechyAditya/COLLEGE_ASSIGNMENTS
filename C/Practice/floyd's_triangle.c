#include<stdio.h>
int main()
{
    int a,n=1;
    printf(" enter number of rows : \n");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",n);
            n++;
        }
        printf(" \n");
    }
return 0;
}
// fatal error...