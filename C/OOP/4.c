#include <stdio.h>

int swap(int *a,int *b, int *c)
{
    int temp,temp2;
    temp=*a;
    temp2=*b;
    *a=*c; 
    *b=temp; 
    *c=temp2; 
}

int main()
{
    int a,b,c,*pa,*pb,*pc;
    printf("Enter three digits to swap: \n");
    scanf("%d%d%d",&a,&b,&c);
    printf("Before swapping: a=%d b=%d c=%d \n",a,b,c);
    pa=&a;
    pb=&b;
    pc=&c;
    swap(pa,pb,pc);
    printf("After swapping: a=%d b=%d c=%d \n",a,b,c);
    
    return 0;
}