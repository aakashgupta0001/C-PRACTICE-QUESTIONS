//W.A.P TO CHECK INPUT ALPHABET IS VOWEL OR CONSUNENT
#include<stdio.h>
int main()
{
    char N;
    printf("Enter any Alphabet:");
    scanf("%c",&N);
    if(N=='a'||N=='e'||N=='i'||N=='o'||N=='u' || N=='A' || N=='I' ||N=='E' || N=='O' || N=='U')
    {
        printf("IT IS A VOWEL:%c",N);
    }
    else
    {
        printf("IT IS A CONSUNENT:%c",N);
    }
    return 0;
}

    