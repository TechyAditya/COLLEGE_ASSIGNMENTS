#include <stdio.h>
int r,c;
int print(int arr[r][c])
{
    int i,j;
    printf("Entered array is: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int i,j;
    printf("Enter the rows and columns of the matrix: \n");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter element at arr[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    print(arr);
    

    return 0;
}