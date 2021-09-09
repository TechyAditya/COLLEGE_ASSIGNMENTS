#include<stdio.h>
// int display( int *arr[][])
// {   
//     int i,j;
//     printf("%d",&(*arr[i][j]));
// }
int main()
{
    int arr[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("enter value of the element [%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("2D array : \n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",arr[i][j]);
            if(j==1)
            {
                printf("\n ");
            }
        }
    }   
return 0;
}