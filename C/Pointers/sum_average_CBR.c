#include<stdio.h>
void add_avg(int *a, int *b, int *sum,float *avg)
{
    *sum= *a + *b;
    *avg= (float) *sum/2;
}


int main()
{
    int x,y,sum;
    float avg;
    printf("enter 2 numbers : \n");
    scanf("%d %d",&x,&y);
    add_avg(&x,&y,&sum,&avg);
    printf("sum of the 2 entered number is : %d\n",sum);
    printf("average of the entered 2 numbers is : %f", avg);
    return 0;
}



