//Assignment 2:
//Question 2(b): Swap two numbers without using a third variable.
#include <stdio.h>
int main()
{
    int A,B;
    printf("Enter A\n");
    scanf("%d", &A);
    printf("Enter B\n");
    scanf("%d", &B);
    //Algorithm to swap A and B.
    A=A+B;
    B=A-B;
    A=A-B;
    printf("After swapping A and b are: %d and %d respectively.", A, B);
    return 0;
}