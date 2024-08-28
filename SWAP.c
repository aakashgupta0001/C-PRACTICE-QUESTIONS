// W.A.P TO SWAP A TWO NUMBERS by using third variable
#include<stdio.h>
int main()
{
    int a,b,t;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    t=a;
    a=b;
    b=t;
    printf("The first number is %d\n",a);
    printf("The second number is %d\n",b);
    return 0;

}