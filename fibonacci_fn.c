//wap to find the fibonacci series up to n terms number using function (no arguments and no return type)
#include <stdio.h>
void fibonacci() {
    int n, a = 0, b = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d, %d, ", a, b);
    for (int i = 3; i <= n; ++i) {
        nextTerm = a + b;
        printf("%d, ", nextTerm);
        a = b;
        b = nextTerm;
    }
}
int main() {
    fibonacci();
    return 0;
} 