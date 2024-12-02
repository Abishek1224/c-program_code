// Write a C Program to find sum of all even numbers between 1 to n, where n will be taken an input. 
#include <stdio.h>
void main() {
    int  n, sum = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            sum = sum + i;
            }
            }
            printf("Sum of even numbers between 1 to %d is: %d", n,sum);
}