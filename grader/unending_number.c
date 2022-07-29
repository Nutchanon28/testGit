#include<stdio.h>
int main() {
    int number;
    scanf("%d",&number);
    if (number < 1)
    {
        printf("ERROR!");
    }
    
    for (int i = number; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
    }
    
 return 0;
}