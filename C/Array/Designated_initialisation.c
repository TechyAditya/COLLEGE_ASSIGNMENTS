#include<stdio.h>
#define N 10
int main()
{
    int arr[10]={[0]=1,[5]=3,[8]=2};
    for(int i=0;i<N;i++)
    {
        printf("%d \n",arr[i]);
    }
return 0;
}