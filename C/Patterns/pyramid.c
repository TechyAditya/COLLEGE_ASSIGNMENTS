#include<stdio.h>
int main()
{
    int n;
    printf("enter number of rows : ");
    scanf("%d",&n);
    for(int i =0;i<=n;i++)
    {
        for(int j=0; j<= 2*n -1;j++)
        {
            if(j>= n-(i-1) && j<= n+(i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
return 0;
}