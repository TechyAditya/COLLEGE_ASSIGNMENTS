#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("enter the number : \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    printf("the factorial of %d is: %d",n,fact);

return 0;
}

//while answer

// #include<stdio.h>
// int main()
// {
//     int i=1,n,fact=1;
//     printf("enter the number : \n");
//     scanf("%d",&n);
//     while(i<=n)
//     {
//         fact = fact*i;
//         i++;
//     }
//     printf("fact of %d  is = %d",n,fact);
    
// return 0;
// }