#include<stdio.h>
int main()
{
    int a;
    printf("enter the number to check");
    scanf("%d",&a);
    printf("if answer comes 0 then its divisible, if not its not divisible \n so the answer is %d", a%97);
    return 0;
}