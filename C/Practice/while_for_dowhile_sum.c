#include<stdio.h>
int main()
{
    int a=1,sum;
    while(a<=10)
    {
        sum+=a;
        a++;
    }
    printf("sum of 1st ten natural numbers : %d",sum);
return 0;
}

// for answer

// #include<stdio.h>
// int main()
// {
//     int i,sum;
//     for(i=1;i<=10;i++)
//     {
//         sum+=i;
//     }
//     printf("sum %d",sum);
// return 0;
// }


//do while answer

// #include<stdio.h>
// int main()
// {
//     int i, sum;
//     do
//     {
//         sum+=i;
//         i++;
              
//     }while(i<=10);
//     printf("sum = %d",sum);
// return 0;
// }