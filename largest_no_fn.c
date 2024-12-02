//wap to find the largest number using function (no arguments and no return type)
#include <stdio.h>
void findLargest() {
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a,&b);
    
    if (a > b ) {
        printf("Largest number is: %d\n", a);
    }
     else {
        printf("Largest number is: %d\n", b);
    }
}
int main() {
    findLargest();
    return 0;
}