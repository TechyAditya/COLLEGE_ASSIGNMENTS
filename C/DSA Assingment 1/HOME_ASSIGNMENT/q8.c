#include<stdio.h>

int main()
{
    int n,l=0,occ=0;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    int ar[n];
    
    for (int i = 0; i < n;  i++)
    {
        printf("enter the elements in position %d :",i);
        scanf("%d",&ar[i]);
    }

    l=ar[0];

    for (int i = 0; i < n; i++)
    {
        if (l==ar[i])
        {
            occ++;
        }

        if (l<ar[i])
        {
            l=ar[i];
            occ=0;
            occ++;
        }
        
    }
    
    printf("The largest element is %d and its occurence is: %d",l,occ);
    
    return 0;
}