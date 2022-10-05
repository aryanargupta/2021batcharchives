/*
Assignment 3:
Question 1: Program to generate multiplication table of any integer read
through the keyboard.
Do using while loop
Print the table in an appealing and nice format
(A)Using tab space option and
(B)Using appropriate field width
*/
#include <stdio.h>
int main()
{
    int i = 1, j = 1, n;
    printf("Please enter the number to get it's table\n");
    scanf("%d", &n);
    printf("\nThe table of %d with tab spaces:\n\n", n);
    while (i <= 10)
    {
        printf("%dx%d = %d \t", n, i, n * i);
        i++;
    }
    printf("\n\n\nThe table of %d with appropriate field width:\n", n);
    while (j <= 10)
    {
        printf("\n%d x %4d = %4d", n, j, n * j);
        j++;
    }
    return 0;
}