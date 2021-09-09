#include<stdio.h>
int main()
{
    int n,i,prime=0;
    printf("enter the number to check whether it is prime or not: \n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            prime =1;
            break;
        }
    }
    if(n==1)
    {
        printf("%d is neither  prime number nor composite",n);
    }
    else if (prime==0){
        printf("%d is a prime number ",n);
    }
    else
    {
        printf("%d is not a prime number",n);
    }
return 0;
}



//while loop

// #include<stdio.h>
// int main()
// {
//     int i=2,n, prime=0;
//     printf("enter number : ");
//     scanf("%d",&n);
//     while(i<n)
//     {
//         if(n%i==0)
//         {
//             prime=1;
//             break;
//         }
//         i++;
//     }
//     if(prime==0)
//     {
//         printf("prime");

//     }
//     else{
//         printf("not prime");
//     }
// return 0;
// }

