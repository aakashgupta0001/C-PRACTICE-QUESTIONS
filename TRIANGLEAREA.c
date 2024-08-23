// W.A.P TO CALCULATE AREA OF TRIANGLE USING HERON'S FORMULA 
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,area;
    printf("Enter the sides of triangle A: ");
    scanf("%f",&a);
    printf("Enter the sides of triangle B: ");
    scanf("%f",&b);
    printf("Enter the sides of triangle C: ");
    scanf("%f",&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle is:%f",area);
    return 0;
}
