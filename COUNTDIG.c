#include<stdio.h>
int main()
{
    int n,i=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while (n>0)
    {
        n=n/10;
        i++;
    }
    printf("Number of digits in the number :%d",i);
    return 0;
    

}