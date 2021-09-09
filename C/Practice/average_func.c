#include<stdio.h>
float average(int a,int b, int c);
int main()
{
    int d,e,f;
    printf("enter  3 numbers : \n");
    scanf("%d %d %d",&d,&e,&f);
    printf ("the value of average is %f :", average(d,e,f));
    return 0;
}
float average(int a, int b, int c)
{
    float avg;
    avg = (float)(a+b+c)/3;
    return avg;
}
