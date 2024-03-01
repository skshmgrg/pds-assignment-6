#include <stdio.h>
void subset(int x[], int y[], int a, int b)
{
    int match = 0;
    for (int i = 0; i < b; i++)
        for (int j = 0; j < a; j++)
            if (x[j]==y[i])
                match++;
    if (match == b)
        printf("array 2 is a subset of array 1");
    else
        printf("array 2 is not a subset of array 1");
}
int main()
{
    int array1[100], size1, array2[100], size2;
    printf("enter the size of array 1: ");
    scanf("%d", &size1);
    printf("enter the elements of array 1 giving space in between: ");
    for (int i = 0; i < size1; i++)
        scanf("%d", &array1[i]);

    printf("enter the size of array 2: ");
    scanf("%d", &size2);
    printf("enter the elements of array 2 giving space in between: ");
    for (int i = 0; i < size2; i++)
        scanf("%d", &array2[i]);
    subset(array1, array2, size1, size2);
}