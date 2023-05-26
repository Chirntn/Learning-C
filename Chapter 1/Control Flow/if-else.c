#include<stdio.h>

int main(){
    int age;
    printf("Enter your age\n");
    
    scanf("%d", &age);
    printf("Your age is %d years old\n",age);

    if (age > 18)
    {
        printf("You can vote !!");
    }
    else if (age>10)
    {
        printf("You need to wait for few years.");
    }else {
        printf("You are just a Child !!!");
    }
    
   return 0; 
}