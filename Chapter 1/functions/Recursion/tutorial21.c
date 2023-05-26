#include <stdio.h>

int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return (n * factorial(n - 1));//base case
    }
}

int main()
{
    int n, result;
    printf("Enter the number of factorials : ");
    scanf("%d", &n);
    result = factorial(n);
    printf("The factorial of %d is : %d\n",n, result);

    return 0;
}