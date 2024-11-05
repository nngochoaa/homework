#include <stdio.h>

int main ()
{
    float a,b;
    printf ("Enter temperature in C: ");
    scanf ("%f", &a);
    //Convert from C to F
    b = ( a * 33.8);
    printf ("%.2f C is equal to %.2f F", a,b);
    return 0;
}