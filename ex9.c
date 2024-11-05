
int main ()
{
    int a,b,c, max;
    printf("Enter the 1st number: ");
    scanf("%d", &a);
    printf("Enter the 2nd number: ");
    scanf("%d", &b);
    printf("Enter the 3rd number: ");
    scanf("%d", &c);
    
    if( a >= b && a >= c )
    {max = a;}
    else if (b >= a && b >= c)
    {max = b;}
    else {max = c;}
    
    printf("The maximum number is: %d", max);
    return 0;
}