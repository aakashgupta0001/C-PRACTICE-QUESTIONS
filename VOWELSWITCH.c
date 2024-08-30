#include<stdio.h>
int main()
{
    char x;
    printf("Enter a character: ");
    scanf("%c", &x);
    switch (x)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    printf("The character is a vowel.\n");
        break;
    
    default:
    printf("The character is a consonant.\n");
        break;
    }
    return 0;
}