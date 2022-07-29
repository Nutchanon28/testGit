#include <stdio.h>

int main()
{
    int number_of_number;
    scanf("%d", &number_of_number);

    int numbers[1000];

    int number_of_minus = 0,number_of_plus = 0;
    for (int i = 0; i < number_of_number; i++)
    {
        scanf("%d", &numbers[i]);

        if (numbers[i] > 0)
        {
            number_of_plus++;
        }

        if (numbers[i] < 0)
        {
            number_of_minus++;
        }
        
        
    }

    printf("%d\n%d", number_of_plus, number_of_minus);

    return 0;
}