// IT lab 10
// Assignment 9
// Question 1 : 1. Once Bob and Alice were playing with toys numbered randomly (+ve integers).
//  Your program should arrange the toys as follows:
// A. Bob should arrange the toys in ascending order.
// B. Alice should arrange the toys in descending order.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of toys: ");
    scanf("%d", &n);
    int toys[n];
    printf("Enter the value of the toys: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &toys[i]);
    }
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (toys[j] > toys[j + 1])
            {
                temp = toys[j];
                toys[j] = toys[j + 1];
                toys[j + 1] = temp;
            }
        }
    }
    printf("\nThe order of Bob: ");
    for (int k = 0; k < n; k++)
    {
        printf("%3d ", toys[k]);
    }
    printf("\nThe order of Alice: ");
    for (int k = n - 1; k >= 0; k--)
    {
        printf("%3d ", toys[k]);
    }
}