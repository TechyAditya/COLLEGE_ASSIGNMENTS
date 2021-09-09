#include<stdio.h>
void nextGreatest(int arr[], int n)
{
	int max=arr[n-1];
	arr[n-1]=-1;
	int i;
	for(i =n-2; i>=0; i--)
	{
		int t=arr[i];
		arr[i]=max;
		if(max<t)
		max=t;
	}
}
void printArray(int arr[], int n)
{
	int i;
	for(i=0; i<n; i++)
	printf("%d\n",arr[i]);
}
int main()
{
	int arr[] = {16,17,4,3,5,2};
	int n=sizeof(arr) /sizeof(arr[0]);
	nextGreatest(arr, n);
	printf("Modified array is: \n");
	printArray(arr, n);
	return (0);
}