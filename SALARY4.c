//W.A.P TO TAKE USER INPUT FATHER NAME,SON NAME,SALARY,PRINT(<FATHER NAME> YOUR SON<SON NAME> IS EARNING <SALARY> MONTLY)
#include<stdio.h>
int main()
{
    char S,F[20];
    int A;
    printf("Enter your Name: ");
    gets(F);
    printf("Enter your son name: ");
    gets(S);
    printf("ENTER SALARY: ");
    scanf("%d",&A);
    printf("%s your son %s is earning %d monthly",F,S,A);
    return 0;
}