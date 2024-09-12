#include<stdio.h>
int main()
{
    int n,r,s=0;
    printf("Enter the number : ");
    scanf("%d", &n);
    int m=n ;
    while(n>0)
    {
        r=n%10;
        s=s+r*r*r;
        n=n/10;

    }
    if(s==m)
    {
        printf("The number is armstrong %d",s);
    }
    else
    {
        printf("The number is not armstrong %d",m);
    }
    return 0;
}