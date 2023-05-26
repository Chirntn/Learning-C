// C format specifiers and Escape Sequences

#include<stdio.h>
#define PI - 3.14

int main()
{
    int a = 8;
     const float b = 7.33;
    printf(" The value of a is %d and \a the value of b is %.2f\n",a,b);
    return 0;
}

/*
%a.bf - in a character spaces print with accuracy of 4 decimal places
-ve symbol leaves character spaces at the end
%c- character
%d - integer
%f - float
%l - long
%lf - double
%LF - long double

const float b - constant, cannot be changed or reassigned
*/