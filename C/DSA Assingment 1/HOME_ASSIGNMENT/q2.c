#include<stdio.h>
int main(){
	int number[30];
	int i,j,a,n;
	printf("Enter size of array\n:");
	scanf("%d",&n);
	printf("Enter elements in array:");
	for(i=0;i<n;++i)
	{
		scanf("%d",&number[i]);
	}
	for(i=0;i<n;++i)
	{
		for(j=i+1;j<n;++j)
		{
		if(number[i]<number[j])
		{
			a=number[i];
			number[i]=number[j];
			number[j]=a;
		}
	}
}
		printf("Numbers arranged in descending order are :\n");
		for(i=0;i<n;++i)
		{
			printf("%d\n",number[i]);
		}
		printf("Second largest no. is :%d\n",number[1]);
		printf("Second smallest no. is :%d\n",number[n-2]);
}

