#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,a,b,c,d;
    printf("Enter the cofficient  of X^2:");
    scanf("%d",&a);
    printf("Enter the cofficient of y:");
    scanf("%d",&b);
    printf("Enter the constant C: ");
    scanf("%d",&c);
    d=b*b-(4*a*c);
    
    if (d>0)
    {
        printf("The roots are real and distinct");
        x=-b+sqrt(d)/(2*a);
        y=-b-sqrt(d)/(2*a);
        printf("ROOT IS=%d",x);
        printf("ROOT IS=%d ",y);
    }
    if (d=0)
    {
        printf("The roots are real and equal");
        x=-b/(2*a);
        y=-b/(2*a);
        printf("ROOT IS=%d",x);
        printf("\nROOT IS=%d ",y);
    }
      return 0;
}
