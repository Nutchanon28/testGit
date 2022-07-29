#include <stdio.h>

void main()
{
    int row, column;
    printf("how many rows ? : ");
    scanf("%d", &row);
    printf("how many columns ? : ");
    scanf("%d", &column);

    int numbers[100][100];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter index [%d][%d] : ", i, j);
            scanf("%d", &numbers[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }
}