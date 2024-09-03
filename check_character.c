#include<stdio.h>
int main()
// WAP to check if given character is digit or not
{
char character;
printf("Enter a character : ");
scanf("%c",&character);
if (character >= '0' && character <= '9')
{
    printf("%c is a digit.\n", character);
}
else {
    printf("%c is not a digit.\n", character);
}
return 0;
}
