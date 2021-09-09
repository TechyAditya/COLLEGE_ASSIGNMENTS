#include <stdio.h>
void segregate0and1(int arr[], int n)
{
	int left=0,right=n-1;
	while(left<right)
	{
		while(arr[left]==0 && left<right)
		    left++;
			while(arr[right]==1 && left<right )
			right--;
			if(left<right)
			{
				arr[left]=0;
				arr[right]=1;
				left++;
				right--;
			}
		}
}
int main()
{
	int arr[]={0,1,0,1,1,0};
	int arr_n=6, i=0;
	segregate0and1(arr, arr_n);
	printf("segregated array is :");
	for(i=0; i<6; i++)
	printf("%d ",arr[i]);
	getchar();
	return 0;
}