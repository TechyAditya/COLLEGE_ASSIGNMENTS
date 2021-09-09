#include<stdio.h>
int  printarray(int *ptr , int n)
{
    for(int i=0; i<n; i++)
    {
        printf(" marks of %dth student is :  %d\n ",i+1,*(ptr+i));
    }
}
int main()
{
    int marks[]={50,89,100,68,90};
    printarray(marks,5);
return 0;
}