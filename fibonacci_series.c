#include<stdio.h>
void main()
{
    int a=0,b=1,c=a+b,i,limit;
    printf("enter any number : ");
    scanf("%d",&limit);
    
    printf("%d %d", a,b);
    for(i=1; i<limit; i++)
    {
        printf("%d",c);
       
        a=b;
        b=c;
         c=a+b;
    }
} 
/*#include<stdio.h>
void main()
{
    int a,b,c,i,limit;
    printf("enter any number : ");
    scanf("%d",&limit);
    a=0,b=1;
    c=a+b;
    printf("%d\n%d\n", a,b);
    
    for(i=1; i<limit; i++)
    {
        printf("%d\n",c);
       
        a=b;
        b=c;
        c=a+b;
    }
}*/