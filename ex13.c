#include <stdio.h>

int main ()
{
    float phy,chem,bio,math,computer, percentage;
//input score
    printf("Enter physics score in a scale of 100: ");
    scanf("%f", &phy);
    printf("Enter chemistry score : ");
    scanf("%f", &chem);
    printf("Enter biology score: ");
    scanf("%f", &bio);
    printf("Enter mathmatics score: ");
    scanf("%f", &math);
    printf("Enter computer score: ");
    scanf("%f", &computer);
//check steps
    percentage = (( phy + chem + bio + math + computer)/5);
    if (percentage >= 90) 
    {printf("Your score is A");}
    else if (percentage >= 80)
    {printf("Your score is B");}
    else if (percentage >= 70)
    {printf ("Your score is C");}
    else if (percentage >= 60)
    {printf ("Your score is D");}
    else if (percentage >= 40)
    {printf ("Your score is E");}
    else {printf ("Your score is F");}
return 0;
}