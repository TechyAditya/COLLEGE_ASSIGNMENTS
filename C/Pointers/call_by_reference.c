#include<stdio.h>  //swaping values of 2 numbers...
void swap(int *a,int *b);
int main()
{
    int x , y;
    printf("enter value of x :");
    scanf("%d",&x);
    printf("enter value of y ");
    scanf("%d",&y);
    printf("before swap the values are : \n x = %d \n y = %d \n",x,y);
    swap(&x,&y);
    printf ("after swap the values are : \n x = %d \n y = %d",x,y);
return 0;
}

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}