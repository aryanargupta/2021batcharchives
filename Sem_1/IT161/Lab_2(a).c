//Assignment 2:
//Question 2(a): Swap two numbers using a third variable.
#include <stdio.h>
int main()
{
    int N1=0, N2=0, TEMP=0;
    printf("Enter a number N1\n");
    scanf("%d", &N1);
    printf("Enter a number N2\n");
    scanf("%d", &N2);
    //Applying the algorithm to swap using TEMP.
    TEMP=N1;
    N1=N2;
    N2=TEMP;
    printf("After swapping, N1 and N2 are %d and %d respectively.", N1, N2);
    return 0;
}
