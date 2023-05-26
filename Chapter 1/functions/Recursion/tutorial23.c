#include<stdio.h>
int main()
{

    int marks[4];
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %d element of the array\n",i);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d element of the array is %d\n",i,marks[i]);
        
    }
    
    // int marks[4];
    // marks[1] = 564;
    // printf("Marks of student 1 is %d\n ", marks[1]);
    // marks[0] = 4;
    
    // marks[2] = 384;
    // marks[3] = 454;
    // printf("Marks of student 1 is %d\n ", marks[0]);
    // return 0;

}