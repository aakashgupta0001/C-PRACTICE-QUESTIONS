// W.A.P TO MAKE A CALCULATOR
#include<stdio.h>
int main()
{
    int num1, num2, result;
    char choice;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter your choice(+,-,/,*): ");
    scanf(" %c", &choice);  // note the space before %c
    switch(choice)
    {
        case '+':
        result = num1 + num2;
        printf(" SUM IS =%d",result);
        break;
        case '-':
        result = num1 - num2;
        printf(" DIFFERENCE IS =%d",result);
        break;
        case '*':
        result = num1 * num2;
        printf(" PRODUCT IS =%d",result);
        break;
        case '/':
        if(num2 != 0)
        {
            result = num1 / num2;
            printf(" DIVISION IS =%d",result);
        }
        else
        {
            printf("Error! Division by zero is not allowed.");
        }
        break;
        default:
        printf("Invalid choice");
    }
    return 0;
}