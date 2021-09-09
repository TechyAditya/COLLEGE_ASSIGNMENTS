#include<stdio.h>
int main()
{
    int a=34;
    int *ptr=&a;
    printf("value of ptr is : %d \n", ptr);
    ptr++;
    printf("value of ptr is : %d \n", ptr);
    ptr--;
    printf("value of ptr is : %d \n", ptr);
    ptr = ptr + 2;
    printf("value of ptr is : %d \n", ptr);
   
    
return 0;
}

//char

// #include<stdio.h>
// int main()
// {
//     char a='b';
//     char *ptr=&a;
//     printf("value of ptr is : %d \n", ptr);
//     ptr++;
//     printf("value of ptr is : %d \n", ptr);
//     ptr--;
//     printf("value of ptr is : %d \n", ptr);
//     ptr = ptr + 2;
//     printf("value of ptr is : %d \n", ptr);
    
// return 0;
// }