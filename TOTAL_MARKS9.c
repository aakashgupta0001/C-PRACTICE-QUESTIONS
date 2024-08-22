// W.A.P TO TAKE NAME,HINDI,ENGLISH,MATHS,TOTAL,PERCENTAGE
#include<stdio.h>
int main()
{
    char N[20];
    int H, E, M, T, P;
    printf("Enter your name: ");
    gets(N);
    printf("HINDI MARKS: ");
    scanf("%d", &H);
    printf("ENGLISH MARKS: ");
    scanf("%d", &E);
    printf("MATHS MARKS: ");
    scanf("%d", &M);
    T = H + E + M;
    P = (T / 300) * 100;
    printf("NAME:%s \nHINDI:%d \nENGLISH:%d \nMATHS:%d \nTOTAL MARKS:%d \nPERCENTAGE:%d",N,H,E,M,T,P);
    return 0;

}