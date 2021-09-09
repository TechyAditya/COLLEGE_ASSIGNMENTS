#include <stdio.h>

struct distance{
    int feet;
    float inch;
}d1,d2;

int main()
{
    printf("Enter distance 1 in feet: \n");
    scanf("%d",&d1.feet);
    printf("Enter distance 1 in inch: \n");
    scanf("%f",&d1.inch);
    printf("Enter distance 2 in feet: \n");
    scanf("%d",&d2.feet);
    printf("Enter distance 2 in inch: \n");
    scanf("%f",&d2.inch);
    
    printf("Sum of distances in feet is: %d\n",d1.feet+d2.feet);
    printf("Sum of distances in inch is: %.2f\n",d1.inch+d2.inch);

    return 0;
}