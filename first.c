#include<stdio.h>
int main()
// WAP to check if given character is digit or not
{
char characer;
printf("Enter a character :");
scanf("%c",&characer);
if (characer >= '0' && characer <= '9')
{
    printf("%c is a digit.\n", characer);
}
else {
    printf("%c is not a digit.\n", characer);
}

return 0;
}
