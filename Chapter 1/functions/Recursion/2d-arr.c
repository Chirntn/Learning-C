#include <stdio.h>

int main() {
   int rows, cols;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   printf("Enter the number of columns: ");
   scanf("%d", &cols);
   
   int arr[rows][cols];
   printf("Enter the elements of the array:\n");

   // Loop through each element of the array and read in input
   for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
         printf("arr[%d][%d] = ", i, j);
         scanf("%d", &arr[i][j]);
      }
   }

   // Print out the array
   printf("The array is:\n");
   for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
         printf("%d ", arr[i][j]);
      }
      printf("\n");
   }

   return 0;
}
