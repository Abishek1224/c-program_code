//Write a C Program to SWAP two variables number by using third variable. 
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter two number : ");
    scanf("%d %d", &a,&b);
    printf("Before swapping a = %d and b = %d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("After swapping a = %d and b = %d",a,b);
}