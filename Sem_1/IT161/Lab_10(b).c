// Question: Study the C program of Bubble Sort algorithm given in the following reference
// and understand the logic involved in sorting.

#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size of array:");
    scanf("%d", &size); // read size
    int arr[size];
    printf("Enter array: \n");
    for (int k = 0; k < size; k++) // read array
        scanf("%d", &arr[k]);
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted array: \n");
    for (int k = 0; k < size; k++)
        printf("%d ", arr[k]);
    return 0;
}