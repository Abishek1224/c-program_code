//WAP to print the reverse of a given number
#include<stdio.h>
void main()
{
    int n,rev=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n!=0)
    {
        rev=rev*10+n%10;
        n /= 10;
        }
        printf("Reverse of the number is:%d",rev);
}
