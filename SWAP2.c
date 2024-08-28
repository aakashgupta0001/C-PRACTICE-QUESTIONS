// W.A.P TO SWAP A NUMBER WITHOUT USING THIRD VARIABLE
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("First number after swapping: %d\n",a);
    printf("Second number after swapping: %d\n",b);
    return 0;
}