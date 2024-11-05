#include <stdio.h>

int main()
{
    int a,b,c;
    printf ("Enter the first number: ");
    scanf ("%d", &a);
    printf ("Enter the second number: ");
    scanf ("%d", &b);
    printf ("The answer for: ");
    printf (" %d + %d = %d \n", a,b,c = a + b);
    printf (" %d - %d = %d \n", a,b,c = a - b);
    printf (" %d * %d = %d \n", a,b,c = a * b);
    printf (" %d / %d = %d \n", a,b,c = a / b);
    printf ("remainder is: %d \n",c = a % b);
    return 0;
}