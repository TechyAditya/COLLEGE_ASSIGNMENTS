#include<stdio.h>
int main()
{
    int year;
    printf("enter year to check leap year");
    scanf("%d",&year);
    if(year % 400 == 0)
    {
        printf("yes %d is a leap year",year);
    }
    else if(year % 100 == 0)
    {
        printf(" %d not a leap year ",year);
    }
    else if(year % 4 == 0)
    {
        printf("yes %d is a leap year",year);
    }
    else
        printf("%D not a leap year");
return 0;
}