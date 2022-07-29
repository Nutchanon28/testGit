#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char input[1000];
    scanf("%[a-zA-z]s", &input);

    int row = strlen(input);
    int column = 4 * (row - 1) + 1;
    int middle = column / 2 + 1;
    int which_letter = 0;

    int isOdd = 0;

    int distance_from_middle = 0;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            if (j % 2 == 1)
            {
                isOdd = 1;
            }else{
                isOdd = 0;
            }
            
            if (j >= middle - distance_from_middle && j <= middle + distance_from_middle && isOdd)
            {
                which_letter = fabs(middle - j)/2;
                printf("%c",input[which_letter]);
                // which_letter++;

                if (which_letter == row)
                {
                    which_letter = 0;
                }
                
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        distance_from_middle+=2;
    }

    return 0;
}