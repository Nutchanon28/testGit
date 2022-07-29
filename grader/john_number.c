#include <stdio.h>
int main()
{
    int input_number;
    scanf("%d", &input_number);

    int john_numbers[1000];
    int which_john_number = 0;
    for (int i = 1; i <= 30; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            john_numbers[which_john_number] = j;
            which_john_number++;
        }
        
    }

    // printf("%d", john_numbers[input_number - 1]);
    for (int i = 0; i < 1000; i++)
    {
        printf("%d\n",john_numbers[i]);
    }
    
    
    return 0;
}