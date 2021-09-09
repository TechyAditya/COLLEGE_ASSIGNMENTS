#include <stdio.h> 
#include <stdlib.h>

struct employee {
    char name[50];
    char gender;
    char designation[50];
    char department[50]; 
    int basic_pay;
    int gross_pay;
}*ptr;

int main()
{
    int n,i,j;
    printf("Enter the number of employees: \n");
    scanf("%d",&n);
    ptr=(struct employee*)malloc(n * sizeof(struct employee));
    
    for(i=0;i<n;i++)
    {
        printf("\nEnter employee %d's name: \n",i+1);
        scanf("%s",ptr[i].name);
        printf("Enter employee %d's gender: \n",i+1);
        scanf("%s",&ptr[i].gender);
        printf("Enter employee %d's designation: \n",i+1);
        scanf("%s",ptr[i].designation);
        printf("Enter employee %d's department: \n",i+1);
        scanf("%s",ptr[i].department);
        printf("Enter employee %d's basic pay: \n",i+1);
        scanf("%d",&ptr[i].basic_pay);
    }
    
    for(i=0;i<n;i++)
    ptr[i].gross_pay = ptr[i].basic_pay + 0.25*ptr[i].basic_pay + 0.75*ptr[i].basic_pay;
    
    for(i=0;i<n;i++)
    {
        printf("\nEmployee %d's name: %s\n",i+1,(ptr+i)->name);
        printf("Employee %d's gender: %c\n",i+1,(ptr+i)->gender);
        printf("Employee %d's designation: %s\n",i+1,(ptr+i)->designation);
        printf("Employee %d's department: %s\n",i+1,(ptr+i)->department);
        printf("Employee %d's basic pay: %d\n",i+1,(ptr+i)->basic_pay);
        printf("Employee %d's gross pay is : %d\n",i+1,(ptr+i)->gross_pay);
        printf("\n");
    }
    return 0;
}