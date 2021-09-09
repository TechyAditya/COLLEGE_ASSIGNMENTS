#include<stdio.h>
int main()
{
    int rem , n, q, res = 0;
    printf("enter the number to check whether it is pallindrome or not: \n");
    scanf("%d", &n);

    q=n;
    while(q!=0)
    {
        rem=q%10;
        res=res * 10 + rem; //reversing the number...
        q=q/10;
    }
    if(n == res)
    {
        printf("palindrome");
    }
    else
    {
        printf(" not palindrome");
    }

return 0;
}