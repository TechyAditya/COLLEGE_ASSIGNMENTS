#include<stdio.h>
void area();
void display();
void area()
{
    
    int side,area;
    printf("enter side of square ");
    scanf("%d",&side);
    area=(side * side);
    printf("area %d\n",area);
    
    
    
}
void display()
{
    int area;
    printf("area is : %d",area);
}
int main()
{
    
    area();
    display();

return 0;
}
 