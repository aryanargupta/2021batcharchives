// Assignment 4
// Question 2: Write a C program to convert a given binary number to its equivalent decimal number.
#include <stdio.h>
int main()
{
    int multiplier = 1, n, rem, dec = 0, step = 1;
    printf("Please enter the binary number to get its decimal conversion: ");
    scanf("%d", &n);
    printf("\n\n");
    while (n > 0)
    {
        rem = n % 10;
        n = n / 10;
        dec = dec + rem * multiplier;
        multiplier = multiplier * 2;
        printf("\nStep %d Remainder = %d Value = %d",
               step, rem, dec);
        step++;
    }
    printf("\n\n\nFinal Value of Decimal conversion is: %d", dec);
    return 0;
}