#include<stdio.h>
#define max 50
int main()
{
    int  a[max][max] , b[max][max], product[max][max];
    int arows,acolumns,sum=0,brows,bcolumns;
    int i , j , k;
    printf("enter size of matrix A : \n");
    scanf("%d %d",&arows,&acolumns);
    for(i=0;i<arows;i++)
    {
        for(j=0;j<acolumns;j++)
        {
            scanf(" ",&a[i][j]);
        }
    }
    
    printf("enter size of matrix B: \n");
    scanf("%d %d",&brows,&bcolumns);
    for(i=0;i<brows;i++)
    {
        for(j=0;j<bcolumns;j++)
        {
            scanf(" ",&b[i][j]);
        }
    }
return 0;
}