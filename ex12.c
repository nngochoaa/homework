#include <stdio.h>

int main ()
{
    float a,b,c,sum;
    printf("Enter the 1st angles: ");
    scanf("%f", &a);
    printf("Enter the 2nd angles: ");
    scanf("%f", &b);
    printf("Enter the 3rd angles: ");
    scanf("%f", &c);
//Check steps
sum = (a + b + c);
    if ( sum == 180 )
    {printf("This is a valid triangle");}
    else {printf("This is not a valid triangle");}
return 0;
}