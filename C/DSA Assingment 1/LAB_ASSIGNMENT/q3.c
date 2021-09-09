#include <stdio.h>
int main()
{
    int a[10],n,i,search,f;
    printf("\n Enter size of a array :");
    scanf("%d",&n);
    printf("\nEnter elements of an array :\n",n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	printf("\n Enter the search element :");
	scanf("%d",&search);
	f=0;
	for(i=0;i<n;i++)
	{
		if(a[i] == search)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	{
		printf("\nFound the search element %d at position %d",search,i+1);
	}
	else
	{
		printf("\nNot Found the search element %d",search,i+1);
	}
    return 0;
}