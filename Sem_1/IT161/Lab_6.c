// Question: Write a C program to check if a number is palindrome or not.
#include <stdio.h>
int main()
{
    int num, rem, sum = 0, val;
    printf("Enter the number = ");
    scanf("%d", &num);
    val = num;
    while (num > 0)
    {
        rem = num % 10;
        sum = (sum * 10) + rem;
        num = num / 10;
    }
    if (val == sum)
        printf("%d is a palindrome number", val);
    else
        printf("%d is not a palindrome number", val);
    return 0;
}