#include <stdio.h>
#include <math.h>

int main()
{
    int q, a, b;
    int distances[100];

    scanf("%d", &q);
    if (q < 1 || q > 10)
    {
        return 0;
    }

    for (int i = 0; i < q; i++)
    {
        // distances[i] = 0;
        scanf("%d %d", &a, &b);

        if (a < 1 || a > 1000000000 || b < 1 || b > 1000000000)
        {
            return 0;
        }

        int absolute_a_b = fabs(a - b);
        distances[i] = absolute_a_b / 10 + (absolute_a_b % 10 > 0);



        // do
        // {
        //     distances[i]++;

        //     if (a > b)
        //     {
        //         a -= 10;
        //     }

        //     if (b > a)
        //     {
        //         b -= 10;
        //     }

        //     if (fabs(a - b) > 10)
        //     {
        //         break;
        //     }

        // } while (1);
    }

    for (int i = 0; i < q; i++)
    {
        printf("%d\n", distances[i]);
    }

    return 0;
}