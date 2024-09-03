#include<stdio.h>
int main()
//print the sum of first n natural numbers.
{
int n;
printf("Enter any number :");
scanf("%d",&n);

int sum = 0;

for (int i=1; i<=n; i++)
{
sum += i;
}
printf("%d",sum);
return 0;
}