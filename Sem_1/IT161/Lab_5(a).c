// Assignment 5
// Question 1: Make a C Program to print stars Sequences (Right Triangular, Isosceles triangle).
#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the number of rows of stars for the right-angled triangle:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("\n");
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
    }
    printf("\n\nEnter the number of rows of stars for the isosceles triangle:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("\n");
        for (j = i; j < n; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
    }
    return 0;
}