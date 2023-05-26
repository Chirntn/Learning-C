#include<stdio.h>
int main()
 {
//     char a = '3';// char takes 1 byte
//     char* ptra = &a;
//     printf("%d\n", ptra);
//     ptra++;
//     printf("%d\n", ptra);
//     printf("%d\n", ptra - 2);
    int arr[] = {11,2,3,4,5,6,67}; 
    printf("Value at position 3 of array is %d\n", arr[3]);
    printf("The Address of the first element of the array is %d\n", &arr[0]);
    printf("The Address of the second element of the array is %d\n", &arr[1]);
    printf("The Address of the third element of the array is %d\n", &arr[2]);
    printf("This will print the same address as second %d\n", arr + 1);


    printf("The value at Address of the first element of the array is %d\n", *(&arr[0]));
    printf("The value at Address of the first element of the array is %d\n", &arr[0]);
    printf("The value at Address of the second element of the array is %d\n", *(&arr[1]));
    printf("The value at Address of the third element of the array is %d\n", *(&arr[2]));
    printf("This will print the same address as second %d\n", *(arr + 1));
    return 0;
}