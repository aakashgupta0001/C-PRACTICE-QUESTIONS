#include<stdio.h>
int main()
{
    int S,T;
    printf("ENTER SALARY: ");
    scanf("%d",&S);
    if(S<60000)
    {
        T=0;
    }
    else if(S>=60000 && S<100000)
{
    T=S*0.10;
}
else if (S>=100000 && S<200000)
{
    T=4000+(S*0.15);
}
else
{
    T=19000+(S*0.20);
}
printf("INCOME TAX:%d",T);
return 0;
}

