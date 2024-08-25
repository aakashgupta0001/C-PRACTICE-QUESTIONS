#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    int i=1;
    while(i<=10)
    {
        b=a*i;
        printf("%d x %d =%d \n",a,i,b);
        i++;
    }
    return 0;

}