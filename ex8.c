#include <stdio.h>

int main ()
{
    int a,b,max;
    printf("Enter the 1st number: ");
    scanf("%d", &a);
    printf("Enter the 2nd number: ");
    scanf("%d", &b);
    
    if( a > b)
    {max = a;}
    else {max = b;}
    printf("The maximum number is: %d", max);
    return 0;
}