#include<stdio.h>
int main()
{
    int n_student=3;
    int n_subjects=3;
    int marks[3][3];
    for(int i=0;i<n_student;i++)
    {
        for(int j=0;j<n_subjects;j++)
        {
            printf("enter the marks of %dth student in subject %d : ",i+1,j+1);
            scanf("%d", &marks[i][j]);
        }
    }
    for(int i=0;i<=n_student;i++)
    {
        for(int j=0;j<=n_subjects;j++)
        {
            printf("The marks of %dth student in subject  %d  is :%d \n",i+1,j+1,marks[i][j]);
            
        }
    }
return 0;
}