#include <stdio.h>
int main()
{
    int height, width;
    // scanf("%d", &height);
    // scanf("%d", &width);
    scanf("%d %d", &height, &width);

    if (height < 3 || width < 3)
    {
        printf("ERROR!");
        return 0;
    }

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if ((i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j % 2 == 1))
            {
                printf("O");
            }
            else if ((i % 2 == 0 && j % 2 == 1) || (i % 2 == 1 && j % 2 == 0))
            {
                printf("X");

            }
        }

        printf("\n");
    }

    return 0;
}