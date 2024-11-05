#include <stdio.h>

int main ()
{
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);
    //check sreps
    if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <='z') || ( a >= '0' && a <= '9'))
    {printf(" %c is an alphanumeric character",a);}
    else {printf("%c is not an alphanumeric character",a);}
    return 0;
}