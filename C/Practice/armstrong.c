#include <stdio.h>
#include <math.h>
int main() 
{
    int a, q,count=0,rem,sum=0,i;
    printf("enter a number : \n");
    scanf("%d",&a);
    q=a;
    while(q!=0)
    {
        q=q/10;
        count++;
    }
    printf("number of digits : %d \n",count);
    q=a;
    while(q>0)    
    {    
        rem=q%10;
        sum=sum+pow(rem,count);    
        q=q/10;    
    }
    if(a==sum)
    printf("It is an armstrong number");
    else
    printf("It is not an armstrong number");
    return 0;
}