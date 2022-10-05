// Assignment 3:
// Question 2: Program to convert temperature from degree centigrade (C) to Fahrenheit (F).
// Make provision in your program to convert C to F and also vice versa, using “IF” statement.
#include <stdio.h>
int main()
{
    char choice;
    float C, F;
    printf("If you want to convert temperature in C to F then press c and if F to C then press f else press any other key to exit: ");
    scanf("%c", &choice);
    if (choice == 'c')
    {
        printf("\nEnter temperature in degree centigrade: ");
        scanf("%f", &C);
        F = 9.0 / 5.0 * C + 32.0;
        printf("\nThe temperature in degree fahrenheit is: %0.2f", F);
    }
    else if (choice == 'f')
    {
        printf("\nEnter temperature in degree fahrenheit: ");
        scanf("%f", &F);
        C = (F - 32) * 5 / 9;
        printf("\nThe temperature in degree centigrade is: %0.2f", C);
    }
    else
    {
        printf("\nProgram Exited.");
    }
    return 0;
}