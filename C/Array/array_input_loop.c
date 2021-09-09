#include<stdio.h>
int main()
{
    int marks[5];
    for(int i=0; i<5; i++)
    {
        printf("enter marks of student %d : \n", i+1);
        scanf("%d",&marks[i]);
    }
    for(int i=0; i<5; i++)
    {
        printf("mark of the student is : %d  \n", marks[i]);
        
    }
return 0;
}