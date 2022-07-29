#include <stdio.h>
#include <string.h>

int main()
{
    // char roman_char[] = {'M','D','C','L','X','V','I','\0'};
    char roman_char[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M', '\0'};
    char input_roman_numeral[100];

    scanf("%s", &input_roman_numeral);

    int str_length = strlen(input_roman_numeral);
    int numbers[100];
    for (int i = 0; i < strlen(input_roman_numeral); i++)
    {
        if (input_roman_numeral[i] == 'M')
        {
            numbers[i] = 1000;
        }
        if (input_roman_numeral[i] == 'D')
        {
            numbers[i] = 500;
        }
        if (input_roman_numeral[i] == 'C')
        {
            numbers[i] = 100;
        }
        if (input_roman_numeral[i] == 'L')
        {
            numbers[i] = 50;
        }
        if (input_roman_numeral[i] == 'X')
        {
            numbers[i] = 10;
        }
        if (input_roman_numeral[i] == 'V')
        {
            numbers[i] = 5;
        }
        if (input_roman_numeral[i] == 'I')
        {
            numbers[i] = 1;
        }
    }

    // foreach
    // {
    //     if (before this one = this one / 10 or this one / 5)
    //     {
    //         before this one = -before this one
    //     }
    // }
    for (int i = 0; i < strlen(input_roman_numeral); i++)
    {
        if (numbers[i - 1] == numbers[i]/10 || numbers[i - 1] == numbers[i]/5)
        {
            numbers[i - 1] *= -1;
        }
        
    }

    int number = 0;
    for (int i = 0; i < strlen(input_roman_numeral); i++)
    {
        number += numbers[i];
    }

    printf("%d",number);

    return 0;
}