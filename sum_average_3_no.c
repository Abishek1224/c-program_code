#include<stdio.h>
int main()
//print the average of 3 numbers.
{
int a,b,c,average,sum;
printf("Enter any 3 numbers :");
scanf("%d %d %d",&a,&b,&c);

sum = a+b+c;
average = sum/3;
printf("sum of those variable is : %d",average);
return 0;
}