#include<stdio.h>

int main(){
    int age,marks;
    printf ("Enter your age\n");
    scanf("%d",&age);

    printf ("Enter your marks\n");
    scanf("%d",&marks);
    switch (age)
    {
    case 3:
        printf("The age is 3\n");
        switch (marks)
        {
        case 45:
            printf("Your marks are 45\n");
            break;
        
        default:
        printf("Your marks are not 45");
            break;
        }
        break;
    case 13:
        printf("The age is 13\n");
        break;
    case 30:
        printf("The age is 30\n");
        break;
    
    default:
        printf("None of the above\n");
        break;
    }
    return 0;
}