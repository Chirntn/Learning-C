#include <stdio.h>
// with argument and with return value
int sum( int a, int b);
//with argument and without return value
void printstar(int n){
    for (int i = 0; i < n; i++)
    {
        printf("%c",'*');
    }
    
}
// without arguments and with return value
int takenumber()
{
    int i;
    printf("\nEnter a number : ");
    scanf("%d",&i);
    return i;
}

//without arguments and without return value4
void myname(){
    printf("My name's Chirantan");
}


int main()
{
    int a, b, c;
    a = 45;
    b = 83;
    // c =sum (a, b);
    // printstar(7);
    myname();
    c = takenumber();
    printf("The number entered is  is : %d \n", c);
    return 0;
}

int sum ( int a , int b)
{
    return a + b;
}