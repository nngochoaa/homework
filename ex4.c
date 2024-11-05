#include <stdio.h>

int main()
{
    int a;
    double b,c,d;
    printf ("Enter days: ");
    scanf ("%d", &a);
    printf (" Have %d days \n", a);
    b=((a % 365)/ 7);
    printf ("Change into weeks: %.2lf weeks\n",b);
    c=(a / 365);
    printf ("Change into years: %lf years \n", d);
    return 0;
}