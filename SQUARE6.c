// W.A.P TO TAKE USER INPUT AND PRINT SQUARE OF NUMBR
#include<stdio.h>
int main()
{
    int num,square;
    printf("Enter a number: ");
    scanf("%d", &num);
    square = num * num;
    printf("Square of %d is %d", num, square);
    return 0;


}