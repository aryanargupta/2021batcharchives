// Assignment 5
// Question 2 - Make a C Program to print Fibonacci series up to 100.
#include <stdio.h>
int main()
{
    int i, j, k;
    i = 0;
    j = 1;
    k = 0;
    // printing 0 and 1
    printf("Fibonacci series upto term with value less than 100: %d %d", i, j);
    // loop for printing rest of the sequence
    while (k >= 0)
    {
        k = i + j;
        if (k > 100)
            break;
        printf(" %d", k);
        i = j;
        j = k;
    }
    return 0;
}