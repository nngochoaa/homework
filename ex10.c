#include <stdio.h>

int main ()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    
    if(a % 2 ==0)
    {printf("%d is the an even number", &a);}
    else {printf("%d is an odd number", &a);}
    return 0;
}