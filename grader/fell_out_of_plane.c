#include <stdio.h>
#include <math.h>

int main()
{
    int number;
    scanf("%d", &number);

    if (number == 0)
    {
        printf("ERROR!");
        return 0;
    }

    // char output_char;
    // if (number > 0)
    // {
    //     output_char = "$";
    // }
    // else
    // {
    //     output_char = "o";
    // }

    if (number > 0)
    {
        for (int i = 0; i < fabs(number); i++)
        {
            for (int j = 0; j < fabs(number); j++)
            {
                if ((i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j % 2 == 1))
                {
                    printf("$");
                }
                else if ((i % 2 == 0 && j % 2 == 1) || (i % 2 == 1 && j % 2 == 0))
                {
                    printf(" ");
                }
            }

            printf("\n");
        }
    }
    else
    {
        for (int i = 0; i < fabs(number); i++)
        {
            for (int j = 0; j < fabs(number); j++)
            {
                if ((i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j % 2 == 1))
                {
                    printf("o");
                }
                else if ((i % 2 == 0 && j % 2 == 1) || (i % 2 == 1 && j % 2 == 0))
                {
                    printf(" ");
                }
            }

            printf("\n");
        }
    }

    return 0;
}