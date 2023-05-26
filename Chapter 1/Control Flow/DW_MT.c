#include <stdio.h>

int main()
{
    int num, mul, index = 0;
    printf("Which Multiplication Table do you want :");
    scanf("%d", &num);

    do
    {
        mul = num * (index + 1);
        printf("%d X %d = %d\n", num, index + 1, mul);
        index++;
    } while (index < 10);
    return 0;
}