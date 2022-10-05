// Question: Write a C program to print the given pattern using functions
#include <stdio.h>
void print()
{
    int i, j, n = 6;
    printf(" C");
    for (i = 1; i < n; i++)
    {
        printf("\n");
        for (j = i; j < n; j++)
        {
            printf(" ");
        }
        if (i == 1)
            printf("i ");
        if (i == 2)
            printf("s ");
        if (i == 3)
            printf("b ");
        if (i == 4)
            printf("e ");
        if (i == 5)
            printf("s ");
        for (j = 1; j < (2 * i - 1); j++)
        {
            printf(" ");
        }
        if (i == 1)
            printf("i");
        if (i == 2)
            printf("s");
        if (i == 3)
            printf("b");
        if (i == 4)
            printf("e");
        if (i == 5)
            printf("s");
    }
    printf("\ntsebsiCisbest");
}
int main()
{
    print();
    return 0;
}