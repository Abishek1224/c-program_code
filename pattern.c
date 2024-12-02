#include <stdio.h>

void drawPattern(int n) 
{
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= n; j++) 
        {
            if(j==5 || i==5 || j==6-i)
            {
               printf("+");
            } else 
            {
                printf(" ");
            }
        }
       printf("\n");
    }
}

int main() {
    int n = 7; // Size of the pattern
    drawPattern(n);
    return 0;
}
