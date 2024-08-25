#include<stdio.h>
int main()
{
    int a;
    int i=0;
    printf("Enter a number to stop counting: ");
    scanf("%d", &a);
    while (i < a)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}