#include<stdio.h>
void main() {
int n;
printf("enter any number : ");
scanf("%d",&n);
for(int i=10;i>=1;i--) {
    printf("%d\n",n*i);
}
}
