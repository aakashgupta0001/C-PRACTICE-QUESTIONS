// W.A.P TO TAKE PRINCIPLE,RATE,AMOUNT,SIMPLE INTEREST
#include<stdio.h>
#include<conio.h>
int  main()
{
    int  p,r,a,s;
    printf("Enter the principal amount:");
    scanf("%f",&p);
    printf("Enter the rate of interest:");
    scanf("%f",&r);
    printf("Enter the time period:");
    scanf("%f",&a);
    s=(p*r*a)/100;
    printf("The simple interest is:%d",s);
    return 0;
}