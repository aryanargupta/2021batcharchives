// Assignment 4
// Question 1: Write a C program to convert a given decimal number to its equivalent binary number.
#include <stdio.h>
int main()
{
    int i = 1, multiplier = 1, number, num, binary = 0, rem;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    printf("The decimal number entered is: %d\n\n", num);
    number = num;
    while (num > 0)
    {
        rem = num % 2;
        binary = multiplier * rem + binary;
        multiplier = multiplier * 10;
        printf("Step %2d: %4d/2, Remainder = %d, Quotient = %4d\n",
               i, num, rem, num / 2);
        num = num / 2;
        i++;
    }
    printf("\n%d in decimal = %d in binary", number, binary);
    return 0;
}