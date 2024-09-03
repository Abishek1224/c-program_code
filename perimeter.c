#include<stdio.h>
int main () {
// write a program to calculate perimeter of retangle
int p,l,w;
printf("enter length :");
scanf("%d",&l);

printf("enter width :");
scanf("%d",&w);

p = 2 * (l + w);
printf("perimeter is %d",p);
    return 0;
}