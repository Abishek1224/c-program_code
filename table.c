// wap to make a table  of 10 numbers and n is given by user
#include<stdio.h>
void main()
{
    int n,i;
    printf("enter any number : ");
    scanf("%d",&n);
    for(i=1; i<=10; i++){
 printf("%d * %d = %d\n",n,i,n*i);
    }
}