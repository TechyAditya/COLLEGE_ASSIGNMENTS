#include<stdio.h>
int main() //syntax: condition ? expression if true : expression if false
{
    int a;
    printf("enter number");
    scanf("%d",&a);
    (a>6)? printf("ur number is greater than 6"):printf("ur number is less than 6");
return 0;
}