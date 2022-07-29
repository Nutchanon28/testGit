#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number);

    int fibonacci_a = 1, fibonacci_b = 1;
    int is_a_increasing = 0;
    while (1)
    {
        if (is_a_increasing)
        {
            fibonacci_a += fibonacci_b;
            is_a_increasing--;

            if (number > fibonacci_b && number < fibonacci_a)
            {
                printf("%d is NOT FIBONACCI");
                break;
            }

            if (number == fibonacci_b)
            {
                printf("%d is FIBONACCI");
                break;
            }
        }

        if (!is_a_increasing)
        {
            fibonacci_b += fibonacci_a;
            is_a_increasing++;

            if (number > fibonacci_b && number < fibonacci_a)
            {
                printf("%d is NOT FIBONACCI");
                break;
            }

            if (number == fibonacci_b)
            {
                printf("%d is FIBONACCI");
                break;
            }
        }
    }
    return 0;
}