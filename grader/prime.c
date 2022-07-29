#include <stdio.h>
#include <math.h>

int main()
{
    int input_number;
    scanf("%d", &input_number);

    if (input_number == 1)
    {
        printf("%d is NOT PRIME", input_number);
        return 0;
    }

    for (int i = 2; i <= sqrt(input_number); i++)
    {
        if (input_number % i == 0)
        {
            printf("%d is NOT PRIME", input_number);
            return 0;
        }
    }

    printf("%d is PRIME", input_number);

    return 0;
}