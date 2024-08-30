#include<stdio.h>
int main()
{
    int a;
    char x;
    printf("Enter alphabet: ");
    scanf("%c",&x);
    if(x=='M' || x=='m')
    {
        printf("You are male ");
        printf("Enter your age: ");
        scanf("%d",&a);
        if(a>=18)
        {
            printf(" eligible for Marrige");
        }
        else
        {
            printf("not eligible for Marrige");
        }
    }
    else if(x=='F' ||x=='f')
    {
        printf("You are female ");
        printf("Enter your age: ");
        scanf("%d",&a);
        if(a>=18)
        {
            printf(" eligible for Marrige");
        }
        else
        {
            printf("not eligible for Marrige");
        }
    }
    else
    {
        printf("You are animal");
    }
    return 0;
}