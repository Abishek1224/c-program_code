//wap to find the sum of n natural number using function (no arguments and return type)
#include <stdio.h>
void sumOfNaturalNumbers() {
    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);
}
int main() {
    sumOfNaturalNumbers();
    return 0;
} 