// Question - Write a C program to display the stored binary equivalent of a
// given SIGNED integer (input through keyboard) on the screen, using bitwise operators.
#include <stdio.h>
int main()
{
    int n, i, x;
    printf("Enter a decimal Number : ");
    scanf("%d", &n);
    printf("\nThe signed binary equivalent in 32 bits of the number :");
    for (i = 31; i >= 0; i--)
    {
        x = n & (1 << i);
        if (x == 0)
            printf("0");
        else
            printf("1");
    }
    return 0;
}