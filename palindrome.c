#include <stdio.h>
void main() {
    int num, reversed = 0, original;
    printf("Enter a number : ");
    scanf("%d", &num);
    original = num;
    while (num != 0) 
    {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    if (original == reversed) 
    {
        printf("The number is palindrome.\n");
    } 
    else 
    {
        printf("The number is not palindrome.");
    }
}