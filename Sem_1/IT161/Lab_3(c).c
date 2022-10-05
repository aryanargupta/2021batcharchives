// Assignment 3:
// Question 3: Program to find the greatest among 3 numbers using nested if-else statements.
#include <stdio.h>
int main()
{
    float A, B, C;
    printf("Please enter 3 numbers to find the greatest of the three.\n");
    scanf("%f %f %f", &A, &B, &C);
    if (A > B)
    {
        if (A > C)
            printf("Greatest number is: %0.2f\n", A);
        else
            printf("Greatest number is: %0.2f\n", C);
    }
    else
    {
        if (B > C)
            printf("Greatest number is: %0.2f\n", B);
        else
            printf("Greatest number is: %0.2f", C);
    }
    return 0;
}