/* W.A.P TO CALCULATE A ELECTRICITY BILL,
UNIT-100  UNIT-100 TO 200  UNIT 200 TO 400  ABOVE 400
RS-1      RS-2             RS2.5              RS-3
*/

#include<stdio.h>
int main()
{
    int unit;
    float bill;
    printf("Enter the number of units consumed: ");
    scanf("%d",&unit);  
    if(unit<=100)
    {
        bill=unit*1+50;
    }
    else if(unit<=200 || unit>100)
    {
        bill=100*1+50+((unit-100)*2);
    }
    else if(unit<=400 || unit>200)
    {
        bill=100*1+50+((200-100)*2)+((unit-200)*2.5);
    }
    else if(unit>400)
    {
        bill=100+200+50+250+500+(unit-400)*3;
    }
    printf("Your electricity bill is: %.2f",bill);
    return 0;


}