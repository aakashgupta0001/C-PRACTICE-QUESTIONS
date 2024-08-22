#include<stdio.h>
int main()
{
    int H,E,M,S,T,P;
    char N[20];
    printf("Enter your Name: ");
    gets(N);
    printf("Hindi marks : ");
    scanf("%d",&H);
    printf("English marks : ");
    scanf("%d",&E);
    printf("Maths marks : ");
    scanf("%d",&M);
    printf("Science marks : ");
    scanf("%d",&S);
    T=H+E+S+M;
    P=T/4;
    printf("NAME:%s \nHINDI:%d \nENGLISH:%d \nMATHS:%d \nSCIENCE:%d \nTOTAL MARKS:%d \nPERCENTAGE:%d",N,H,E,M,S,T,P);
    if(P>=40)
    {
        printf("\nRESULT: Pass");
    }
    else
    {
        printf("\nRESULT: FAIL");
    }
    return 0;

}