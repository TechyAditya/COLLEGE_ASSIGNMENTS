#include<stdio.h>
void disp(); // fuction prototype...
int main()
{
    
    int a;
    printf("initialising display\n");
    disp(); //function call...
    printf("initialising display finished\n");

    return 0;
}
// function definition...

void disp()
{
    printf("this is display\n");
}