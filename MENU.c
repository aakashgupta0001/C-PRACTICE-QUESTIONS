#include<stdio.h>
#include<process.h>
#include <stdlib.h>
int main()
{
    int a,b,c,d,e;
    printf("ADD-------1");
    printf("\nSUB-------2");
    printf("\nMUL-------3");
    printf("\nDIVIDE-----4");
    printf("\nEXIT-------5");
    printf("\nCHOOSE CHOICE: ");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        printf("ENTER  NUMBER: ");
        scanf("%d%d",&b,&a);
        printf("ADD OF %d AND %d IS %d",b,a,b+a);
        break;
        case 2:
        printf("ENTER  NUMBER: ");
        scanf("%d%d",&b,&a);
        printf("SUB OF %d AND %d IS %d",b,a,b-a);
        break;
        case 3 :
        printf("ENTER  NUMBER: ");
        scanf("%d%d",&b,&a);
        printf("MUL OF %d AND %d IS %d",b,a,b*a);
        break;
        case 4:
        printf("ENTER  NUMBER: ");
        scanf("%d%d",&b,&a);
        if(a!=0)
        {
            printf("DIV OF %d AND %d IS %d",b,a,b/a);
        }
        else
        {
            printf("CANNOT DIVIDE BY ZERO");
        }
        break;
        case 5 :
        exit(0);
        break;
        default:
        printf("INVALID CHOICE");

    }
    return 0;
}