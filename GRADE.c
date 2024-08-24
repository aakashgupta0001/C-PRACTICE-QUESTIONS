//W.A.P TO TAKE NAME,HINDI,ENGLISH,MATHS,SCIENCE,TOTAL MARKS,PERCENTAGE,RESULT,GRADE
#include<stdio.h>
int main()
{
    char N[20];
    int H,E,M,S,T,P;
    printf("Enter name: ");
        gets(N);
        printf("Enter Hindi marks: ");
        scanf("%d",&H);
        printf("Enter English marks: ");
        scanf("%d",&E);
        printf("Enter Maths marks: ");
        scanf("%d",&M);
        printf("Enter Science marks: ");
        scanf("%d",&S);
        T=H+E+M+S;
        P=T/4;
        printf("*****************************************************************************************");
        printf("\nNAME:%s \nHINDI MARRKS:%d \nMATHS MARKS:%d \nENGLISH MARKS:%d \nSCIENCE MARKS:%d \nTOTAL MARKS:%d \nPERCENTAGE:%d ",N,H,M,E,S,T,P);
        if(P>90)
        {
            printf("\nRESULT:EXCELLENT \nGRADE:A");
        }
        else if(P>=80)
        {
            printf("\nRESULT:GOOD \nGRADE:B");
        }
        else if(P>=60 && P<80)
        {
            printf("\nRESULT:FAIR \nGRADE:C");
        }
        else if(P<60 && P>=45)
        {
            printf("\nRESULT:PASS \nGRADE:D");
        }
        else
        {
            printf("\nRESULT:FAIL \nGRADE:F");
        }
        return 0;
}