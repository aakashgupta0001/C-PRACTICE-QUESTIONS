#include<stdio.h>
int main ()
{
    int a,i;
    printf("Enter a number: ");
    scanf("%d", &a);

    for(i=a;i>=1;i--)
    {
     printf("\n%d",i);   
    }
    return 0;
}