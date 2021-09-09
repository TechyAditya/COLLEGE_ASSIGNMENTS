#include<stdio.h>
int main()
{
	int r;int c;
	printf("Enter row value= ");
	scanf("%d",&r);
	printf("\n");
	printf("Enter coulumn value= ");
	scanf("%d",&c);
	printf("\n");
	printf("Enter elements =");
    int a[r][c];
    
       for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    
	int t;
	for(int j=0;j<r;j++){
	
    for(int i=0;i<c/2;i++)
    {
    t=a[j][i];
    	a[j][i]=a[j][c-1-i];
    	a[j][c-1-i]=t;
    }
}
    
    
        for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}