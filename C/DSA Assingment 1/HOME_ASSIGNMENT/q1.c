#include <stdio.h>
int main() {
    int arr[12] = {3,5,4,2,6,5,6,6,5,4,8,3}, x, y, dis=0, distance=0;
    printf("Array: ");
    for(int i = 0;i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nEnter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    for(int i =0; i<10; i++){
        if(arr[i] == x){
            distance = 1;
        }
        if(arr[i]==y){
            break;}
            
        if(distance=1){
            dis++;
        }
    }
    printf("\nDistance=%d",dis);
    return 0;
}