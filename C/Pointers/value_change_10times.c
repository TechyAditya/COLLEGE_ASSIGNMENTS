#include<stdio.h>
int times(int *a);
int main()
{
    int b;
    printf("enter a number \n");
    scanf("%d",&b);
    printf("the changed values is %d",times(&b));


return 0;
}
int times(int *a)
{
    return 10 * (*a);
}

//another way



//#include<stdio.h>
// int times(int a)
// {
//     return 10 * a;
// }
// int main()
// {
//     int x;
//     printf("enter a number \n");
//     scanf("%d",&x);
//     printf("the changed values is %d",times(x));
    
// return 0;
// }