#include<stdio.h>
#include<string.h>
int main()
{
    char c1[6]  = "Hello";
    char* c2;
    c2 = c1;
    printf("%d\n",sizeof(&c2));
    c2++;
    printf("%d",sizeof(c2));
    // for (int i = 0; i < strlen(c1); i++)
    // {
    //     printf("%c\n",c2[i]);
    // }
    
    // printf("%c",c2[1]);

    return 0;
}