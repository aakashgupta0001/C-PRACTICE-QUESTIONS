#include<stdio.h>
#include<math.h>
int main()
{
    int A,B,C;
    printf("Enter number : ");
    scanf("%d",&A);
    printf("Enter power: ");
    scanf("%d",&B);
    C=pow(A,B);
    printf("RESULT:%d",C);
    return 0;
}