//Write a C Program to Calculate the Factorial of a Number using For loop. 
#include <stdio.h>
void main() {
    int number, factorial = 1, i;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (i = 1; i <= number; i++) {
        factorial *= i;
    }
    printf("The factorial of %d is %d.\n", number, factorial);
}