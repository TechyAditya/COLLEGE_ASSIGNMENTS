#include <stdio.h>

struct student{
    int roll_no;
    char name[50];
    char g;
    int marks[5];
};

int main()
{
    int n,i,j;
    printf("Enter the number of students: \n");
    scanf("%d",&n);
    struct student s[n];
    int sum[n];
    for(i=0;i<n;i++)
    sum[i]=0;
    for(i=0;i<n;i++)
    {
        printf("Enter student %d's roll no: \n",i+1);
        scanf("%d",&s[i].roll_no);
        printf("Enter student %d's name \n",i+1);
        scanf("%s",&s[i].name);
        printf("Enter student %d's gender: \n",i+1);
        scanf("%s",&s[i].g);
        for(j=0;j<5;j++)
        {
            printf("Enter student %d's marks in subject %d\n",i+1,j+1);
            scanf("%d",&s[i].marks[j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<5;j++)
        sum[i]=sum[i]+s[i].marks[j];
    }
    
    for(i=0;i<n;i++)
    {
        printf("Student %d's roll no is %d\n",i+1,s[i].roll_no);
        printf("Student %d's name %s\n",i+1,s[i].name);
        printf("Student %d's gender: %c\n",i+1,s[i].g);
        for(j=0;j<5;j++)
        printf("Student %d's marks in subject %d is %d\n",i+1,j+1,s[i].marks[j]);
        printf("The total marks of student %d is %d\n",i+1,sum[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<5;j++)
        {
            if(s[i].marks[j]<40)
            printf("Student %d failed at subject %d \n",i+1,j+1);
        }
    }
    return 0;
}