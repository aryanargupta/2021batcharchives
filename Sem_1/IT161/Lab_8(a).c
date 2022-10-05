// Question: Given the rules, write a MAIN program to read a year (4-digit integer) and tell whether the 
// given year is/was a leap year
#include <stdio.h>
int main()
{
    int year;
    printf("Please Enter year to check leap year: ");
    scanf("%d", &year); // Take input for year variable
    if (year >= 1752)
    {
        if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        {
            printf("%d is a Leap Year", year);
        }
        else
        {
            printf("%d is not a Leap Year", year);
        }
    }
    else
        printf("There were no leap years before 1752");
    return 0;
}