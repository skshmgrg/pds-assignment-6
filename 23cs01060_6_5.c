#include <stdio.h>
int main()
{
    int rows, columns;
    printf("enter the number of rows ");
    scanf("%d", &rows);
    printf("enter the number of columns ");
    scanf("%d", &columns);

    int array[100][100], newarray[100][100];
    printf("enter the desired matrix\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            scanf("%d", &array[i][j]);
            
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            newarray[j][i] = array[i][j];

    for (int i = 0; i < columns; i++)
        for (int j = 0; j < rows; j++)
            printf("%d ", newarray[i][j]);
        printf("\n");
}
