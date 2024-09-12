#include<stdio.h>
int main()
{
    int n,r,s=0;
    printf("Enter the number : ");
    scanf("%d", &n);
    int m=n;
    while (n>0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;

    }
    if(s==m)
    {
        printf("The number is a palindrome");
    }
    else
    {
        printf("Number is not a palindrome");
    }
    return 0;

    
}