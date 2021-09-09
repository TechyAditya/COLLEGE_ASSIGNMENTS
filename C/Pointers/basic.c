#include<stdio.h> 
int main()
{
    int i=23;
    int *j= &i; // address of i is now stored in j...
    int **k=&j;
    printf("the value of i is : %d \n",i);
    printf("the value of i is : %d \n", *j);
    printf("the value address of i is : %u\n", &i);
    printf("the value address of i is : %u \n", j);
    printf("the value address of j is : %u \n", &j);
    printf("the address of j is : %u \n",&k);
    printf("the value of j is: %d \n", *j);
    printf("the value of j is: %d", *(&j));


return 0;
}
