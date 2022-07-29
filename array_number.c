#include <stdio.h>

void main(){
    int number[100];

    for (int i = 1; i <= 100; i++)
    {
        number[i - 1] = i;
    }

    for (int i = 0; i < 100; i++)
    {
        printf("%d ",number[i]);
        if (i % 9 == 0 && i != 0)
        {
            printf("\n");
        }
        
    }

    
}