#include<stdio.h>
int main()
{
    char N[20];
    int A;
    printf("Enter your name: ");
    gets(N);
    printf("Enter your age : ");
    scanf("%d",&A);
    printf("YOUR NAME IS:%s \nYOUR AGE IS:%d ",N,A);
    return 0;
}