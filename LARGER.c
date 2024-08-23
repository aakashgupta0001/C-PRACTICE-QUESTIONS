// W.A.P TAKE 3 NUMBER AND COMPARE WHICH ONE IS LARGER
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first no :");
    scanf("%d",&a);
    printf("Enter the second no : ");
    scanf("%d",&b);
    printf("Enter the third no : ");
    scanf("%d",&c);
    if(a>b && a>c)
    {
    printf("%d is the largest no",a);
    }
    else if(b>c && b>a) 
    {
    printf("%d is the largest no",b);
    }
    else
    {
    printf("%d is the largest no",c);
    }
    return 0;

}