#include <stdio.h>

int main()
{
    int n, i, *ptr, sum = 0;
    printf("Enter the size of the array: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Entered array is: \n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    ptr = arr;

    for (i = 0; i < n; i++)
    {
        sum += *ptr;
        ptr++;
    }
    printf("\n");
    printf("Sum of elements of the array = %d ", sum);

    return 0;
}