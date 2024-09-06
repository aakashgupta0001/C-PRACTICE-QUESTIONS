#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value :");
    scanf("%d%d",&a,&b);
    c=a+1;
    while(c<b)
    {
        printf("\n%d ",c);
        c++;

    }
    return 0;

}