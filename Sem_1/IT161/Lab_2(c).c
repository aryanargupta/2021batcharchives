// Assignment 2:
// Question 3: Program to reverse the digits of a given number(At max 3 digits).
#include <stdio.h>
int main()
{
    int var, numdig;
    printf("Please enter a number which has maximum of 3 digits\n");
    scanf("%d", &var);
    if (var >= 0)
    {
        if (var >= 10)
        {
            if (var < 100)
                numdig = 2;
            else
            {
                if (var < 1000)
                    numdig = 3;
                else
                    printf("Exceeding the range");
            }
        }
        else
            numdig = 1;
    }
    else
        printf("Below range");
    if (numdig == 1)
    {
        printf("This number is single digit hence it's reverse is itself: %d",
               var);
    }
    if (numdig == 2)
    {
        int rem, rvar = 0, var1;
        var1 = var;
        rem = var1 % 10;
        rvar = rvar * 10 + rem;
        var1 = var1 / 10;
        rem = var1 % 10;
        rvar = rvar * 10 + rem;
        printf("Original and Reversed numbers are: %d and %d respectively", var, rvar);
    }
    if (numdig == 3)
    {
        int rem, rvar = 0, var1;
        var1 = var;
        rem = var1 % 10;
        rvar = rvar * 10 + rem;
        var1 = var1 / 10;
        rem = var1 % 10;
        rvar = rvar * 10 + rem;
        var1 = var1 / 10;
        rem = var1 % 10;
        rvar = rvar * 10 + rem;
        printf("Original and Reversed numbers are: %d and %d respectively", var, rvar);
    }
    return 0;
}
