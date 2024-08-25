#include<stdio.h>

int main() {
    int a;
    int i = 0;
    
    printf("Enter a number: ");
    scanf("%d", &a);
    
    while (i < a) {
        printf("HAPPY BIRTHDAY TO YOU!\n");  
        i++;
    }
    
    return 0;
}
