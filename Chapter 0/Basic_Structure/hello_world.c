#include<stdio.h> // preprocessor command // include libraries
int main() // program starts here
{
    int a,b;
    printf("Enter Number a : ");
    scanf("%d", &a);

    printf("Enter Number b : ");
    scanf("%d",&b);

    printf("the Sum is %d \n", a + b);

    return 0; // returns int as int is the datatype of the function
}

//Terminal Commands:
// gcc -wall -save-temps hello_world.c -o harry

 
