#include<stdio.h>
int main()
// WAP to print the smallest number of two 
{
int a,b;
printf("Enter any two number : ");
scanf("%d %d",&a,&b);
if (a<b)
{
    printf("a is the smallest number\n");
}
else {
    printf("b is the smallest number\n");
}
return 0;
}
