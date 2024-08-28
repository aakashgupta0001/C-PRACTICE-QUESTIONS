/* W.A.P TO FIND PHONE BILL 
IF NO OF CALLS=400 RENT 400
IF NO OF CALLS=500 RENT 500
150 CALLS FREE
151 TO 400-0.80 RS 
400 TO 1000- 1 RS
ABOVE 1000- 1.20 RS
*/
#include<stdio.h>
int main()
{
    int c;
    float b;
    printf("Enter number of calls: ");
    scanf("%d",&c); 
    if(c<=150)
    {
        b=400;
    }
    else if(c>150 || c<=400)
    {
        b=400+(c-150)*0.80;
    }
    else if(c>400 || c<=1000)
    {
        b=500+200+(c-400)*1;
    }
    else
    {
        b=500+200+600+(c-1000)*1.20;
    }
    printf("Bill is %.2f",b);
    return 0;
}