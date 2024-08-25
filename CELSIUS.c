// W.A.P TO CONVERT CELSIUS TO FARENHIET
# include<stdio.h>
int main()
{
    int f,c;
    printf("Enter temperature in celsius:");
    scanf("%d",&c);
    f=(c*9/5)+32;
    printf("Temperature in fahrenheit is:%d",f);
    return 0;
}