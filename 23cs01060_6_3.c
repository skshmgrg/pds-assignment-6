
#include <stdio.h>

void reverseArray(int arr[], int start, int end)
{
    if (start >= end)
        return;

    // Swap elements at start and end position
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    // Recursively call reverseArray with incremented start and decremented end position
    reverseArray(arr, start + 1, end - 1);
}

int main()
{
    int size, arr[100];
    printf("enter the size of array");
    scanf("%d", &size);
    printf("enter the elements of array giving space in between");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    printf("Original array: ");
    for (int i = 0; i < size; ++i)
        printf("%d ", arr[i]);
    printf("\n");
    reverseArray(arr, 0, size - 1);

    printf("Reversed array: ");
    for (int i = 0; i < size; ++i)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}