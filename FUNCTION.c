#include<stdio.h>
#include <ctype.h>

int  main()
{
    char x,u;
    printf("Enter a character: ");
    scanf("%c",&x);
    u=toupper(x);
    switch(u)
    {
    case 'A' : 
    printf("It is a vowel");
        break;
        case 'E' :
        printf("It is a vowel");
        break;
        case 'I' :
        printf("It is a vowel");
        break;
        case 'O' : 
        printf("It is a vowel");
        break;
    case 'U' :
    printf("It is a vowel");    
    break;

    
    default:
    printf("It is a consonent");
        break;
    }
    return 0;

}