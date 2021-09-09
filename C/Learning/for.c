// #include<stdio.h>
// int main()
// {
//     int a,n;
//     printf("enter value of n: \n");
//     scanf("%d",&n);
//     for(a=1;a<=n;a++){
//          printf("the value of a is :%d \n",a);

//     }
   
// return 0;
// }

//reverse

#include<stdio.h>
int main()
{
    int a,n;
    printf("enter the value of n: \n");
    scanf("%d",&n);
    for(a=n;a;a--)
    {
        printf("%d \n",a);
    }
return 0;
}