// Study the C program of Selection Sort algorithm given in the following reference
// and understand the logic involved in sorting

#include <stdio.h>
int main()
{
    int n, i, j, min_index, swap;
    printf("Enter number of elements ");
    scanf("%d", &n); // read number of elements
    int arr[n];
    printf("Enter array elements \n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n - 1; i++)
    {
        min_index = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[min_index] > arr[j])
                min_index = j;
        }
        if (min_index != i)
        {
            swap = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = swap;
        }
    }
    printf("Sorted Array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}