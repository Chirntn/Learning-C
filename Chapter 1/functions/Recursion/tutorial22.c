/*
Conversion of the following 
kms to miles 
inches to foot
cms to inches 
pound to kgs
inches to meters
*/

#include<stdio.h>
int main()

{
    int n;

    printf("welcome to Conversion Meter!!\n");
    printf("We have the following Conversions Available :\n");
    printf("0. your conversions are useless\n");
    printf("1. kms to miles\n");
    printf("2. inches to foot\n");
    printf("3. cms to inches\n");
    printf("4. pound to kgs\n");
    printf("5.inches to meters\n");
    printf("Which type of conversion do you want ? : ");
    scanf("%d",&n);

    switch (n)
    {
    case 0:
        printf("0. your conversions are useless :\n");
        printf("Sorry to hear that :,( please come back later once we have more conversions online\n");
        printf("Until then, stay safe from faulty conversions :)\n");
        break;

    case 1:
        int a;
        float r;
        printf("1. kms to miles : \n");
        printf("Sure ! Nothing like american imperial units.\n");
        printf("Enter kms : ");
        scanf("%f",&a);
        r = a * 0.621371192;
        printf("\n %d kms is %.2f in miles",a,r);
        break;

    case 2:
        float b;
        float s;
        printf("Frustrated of measuring in inches , you've come to the right place !\n");
        printf("Enter inches :");
        scanf("%f",&b);
        s = b * 0.8333333333;
        printf(" %f inches is %0.2f feet\n",b,s);
        break;

    case 3:
        int c;
        float t;
        printf("ummm.. that's what she said ;)\n");
        printf("Enter Cms :");
        scanf("%f",&c);
        t = c * 0.393700787;
        printf(" %d cms is %.2f inches\n",c,t);
        break;

    case 4:
        int d;
        float u;
        printf("Let's get rid of those imperialistic bastards !!\n");
        printf("Enter pounds :");
        scanf("%f",&d);
        u = d * 0.45359237;
        printf(" %d lb is %.2f kg\n",u,d);
        break;

    case 5:
        int e;
        float v;
        printf("Let's booty stack those inches !!\n");
        printf("Enter Inches :");
        scanf("%f",&e);
        v = e * 0.0254;
        printf(" %d inches is %.2f meters\n",e,v);
        break;
    default:
    printf("\nGet Sober and try again.\n");
        break;
    }


    
}