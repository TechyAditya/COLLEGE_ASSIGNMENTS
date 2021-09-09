#include<stdio.h>
int main()
{
    int i;
    printf("multiplication table of 10 in reverse order : \n");
    for(i=10; i>=1;i--)
    {
        printf("10 * %d =%d \n",i,i*10);
    }
return 0;
}