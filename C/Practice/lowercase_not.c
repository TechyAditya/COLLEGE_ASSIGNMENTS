#include<stdio.h>          //97-122 a-z ASCII values
int main()                 //65-90 A-Z ASCII values
{
    char a;
    printf("enter the character \n");
    scanf("%c",&a);
    if(a <= 122 && a>=97)
    {
        printf("entered character is in lowercase");
    }
    else
        printf("entered character is not in lowercase");
return 0;
}