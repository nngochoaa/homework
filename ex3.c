#include <stdio.h>

int main()
{
    double a,b,c,d;
    printf ("Enter the first height number: ");
    scanf ("%lf", &a);
    printf ("Enter the second height number: ");
    scanf ("%lf", &b);
    c=((a+b)*2);
    printf ("Rectangle's perimeter is: %.2lf \n",c );
    d= (a*b);
    printf ("Rectangle's area is: %.2lf", d);
    return 0;
}
