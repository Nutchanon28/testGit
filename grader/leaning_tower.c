#include<stdio.h>
int main() {
    int number;
    scanf("%d",&number);

    if (number < 2)
    {
        printf("ERROR!");
        return 0;
    }

    int line = 0, additional_space_point = 2;
    for (int n = 1; n <= number; n++)
    {
        line+=n;
    }
    
    int initial_space = 0, increasing_number = 1;
    for (int i = 1; i <= line; i++)
    {
        if (i >= additional_space_point)
        {
            initial_space++;
            increasing_number++;

            additional_space_point = additional_space_point + increasing_number;
            
        }

        for (int j = 0; j < initial_space; j++)
            {
                printf(" ");
            }
        
        for (int k = 0; k < number; k++)
        // number causes error?
        {
            printf("#");
        }
        printf("\n");
        
    }
    
    return 0;
}