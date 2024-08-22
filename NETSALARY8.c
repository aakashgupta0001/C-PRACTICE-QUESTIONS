// W.A.P FOR NAME,SALARY,HRA 10%,BONUS %5 ,PF-200,NET SLARY
#include<stdio.h>
#include<conio.h>
int main()
{
    char N[20];
    int S,H,P,B,NA;
    printf("ENTER NAME: ");
    gets(N);
    printf("Enter salary: ");
    scanf("%d",&S);
    H=S*10/100;
    B=S*0.05;
    P=200;
    NA=S+H+B-P;
    printf(" NAME:%s \nSALARY:%d \nH.R.A:%d \nBONUS:%d \nP.F:%d \nNET SALARY:%d ",N,S,H,B,P,NA);
    return 0;
}