#include<stdio.h>
int main()
{
    int marks[4];
    int *ptr=&marks[0];
     for(int i=0; i<5; i++)
    {
        printf("enter marks of student %d : \n", i+1);
        scanf("%d",ptr);
        ptr++;
    }
    for(int i=0; i<5; i++)
    {
        printf("mark of the student is : %d  \n", marks[i]);
        
    }
return 0;
}