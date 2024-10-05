#include<stdio.h>

void main() {
    int n, sum = 0;
    float average;

    printf("Enter the number: ");
    scanf("%d",&n);

    
    for(int i=1; i<=n; i++) {
        int num;
        printf("Enter number %d: ", i);
        scanf("%d",&num);
        sum += num;
    }

    average = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);
}