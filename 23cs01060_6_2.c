#include <stdio.h>
void func(int array[], int size)
{
    float avg = 0;
    for (int i = 0; i < size; i++)
    {
        avg += (array[i] / (float)size);
    }
    {
        for (int i = 0; i < size; i++)
            if (array[i] > avg)
                printf("%d ", array[i]);
    }
}
int main()

{
    int array[100], size;
    printf("enter the size of array");
    scanf("%d", &size);
    printf("enter the elements of array giving space in between");
    for (int i = 0; i < size; i++)
        scanf("%d", &array[i]);
    func(array,size);
}