// W.A.P TO TAKE ITEM,RATE,QUANTITY,SHOW AMOUNT,DISCOUNT 10%,NET AMOUNT
#include<stdio.h>
#include<conio.h>
int main()
{
    char I[20];
    int R,A,Q,D,N;
    printf("ENTER ITEM NAME: ");
    gets(I);
    printf("ENTER RATE: ");
    scanf("%d",&R);
    printf("ENTER QUANTITY: ");
    scanf("%d",&Q);
    A=R*Q;
    D=A*10/100;
    N=A-D;
    printf("ITEM:%s \nAMOUNT:%d \nDISCOUNT:%d \nNET AMOUNT:%d ",I,A,D,N);
    return 0;
}