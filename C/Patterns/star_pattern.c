// #include<stdio.h>
// void star();
// int main()
// {
    
// return 0;
// }

// void star()
// {
//     int a=1,i,n;
//     for(n=1;n<=5;n++)
//     {
//         for(i=0;i<=n;n++)
//         {
//             printf("*");
//         }
//         a++;
//         a++;
//     }
    

// }

#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}
