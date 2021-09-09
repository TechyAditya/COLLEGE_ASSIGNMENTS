#include<stdio.h>
void morning();
void afternoon();
void night();
int main()
{
    morning();
    afternoon();
    night();
    return 0;
}
void morning()
{
    printf("good morning\n");
}
void night()
{
    printf("good night\n");
}
void afternoon()
{
    printf("good afternoon\n");
}
