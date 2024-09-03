#include <stdio.h>
// print the exchange value of two integer.
int main() {
    int a, b, c;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Before exchange: a = %d, b = %d\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("After exchange: a = %d, b = %d\n", a, b);
    return 0;
}