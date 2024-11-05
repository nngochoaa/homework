#include <stdio.h>


double absolute(double a) 
{
 return (a < 0) ? -a : a; 
}

int main()
{
 double a;

 printf("Enter a number: ");
 scanf("%lf", &a); 
 printf("The absolute value of %.2f is %.2f", a, absolute(a));

return 0;
}

