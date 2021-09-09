#include<stdio.h>
int main()
{
    int a;
    float tax=0;
    printf("enter ur income");
    scanf("%d",&a);
    if(a>=250000 && a<=500000)
    {
        tax= tax + 0.05*(a-250000); 
        printf("income tax paid : %f",tax);
    }
    else if(a>500000 && a<=1000000)
    {
        tax=tax +0.2*(a-500000);
        printf("income tax paid : %f",tax);
    }
    else if(a>1000000)
    {
        tax=tax + 0.3* (a-1000000);
        printf("income tax paid :%f ",tax);
    }
        
return 0;
}