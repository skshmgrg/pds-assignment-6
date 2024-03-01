#include <stdio.h>
int main()
{
    int city;
    float average = 0;
    printf("enter the number of cities");
    scanf("%d", &city);
    int array[10][7];
    for (int i = 0; i < city; i++)
    {
        printf("enter the temperatures corresponding to 7 days of %d city", i + 1);
        scanf("%d %d %d %d %d %d %d", &array[i][0], &array[i][1], &array[i][2], &array[i][3], &array[i][4], &array[i][5], &array[i][6]);
    }
    for (int i = 0; i < city; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            average += (array[i][j]/ 7.0);
        }
        printf("%.2f\n", average);
        average=0;
    }
}