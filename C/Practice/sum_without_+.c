#include<stdio.h>
int main()
{
    int a,b;
    printf("enter 2 numbers : ");
    scanf("%d %d",&a ,&b);
    if(b>0)
    {
        while(b!=0)
        {
            a++;
            b--;
        }
    }
    else
    {
        while(b!=0)
        {
            a--;
            b++;
        }
    }
    printf("sum os 2 numbers is : %d",a);
return 0;
}


// another method

// #include<stdio.h>
// int main()
// {
//     int a,b,i=1,j=1;
//     printf("enter a : ");
//     scanf("%d",&a);
//     printf("enter b : ");
//     scanf("%d",&b);
    
//     if(a>b)
//     {
//         while(i<=a)
//         {
//             b++;
//             i++;
//         }
//         printf("sum : %d",b);
//     }
//     else
//     {
//         while(j<=b)
//         {
//             a++;
//             j++;
//         }
//         printf("sum : %d",a);
        
//     }
//     return 0;
    
// }