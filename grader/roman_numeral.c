#include <stdio.h>
#include <string.h>

int main()
{
    char roman_numeral[1000];
    scanf("%s", &roman_numeral);

    int number = 0;
    int begining = 0;

    char first_two[3] = {roman_numeral[0], roman_numeral[1], '\0'};
    // should definitely use switch case
    if (strcmp(first_two, "IV") == 0)
    {
        number = 4;
        if (roman_numeral[2] == 'I')
        {
            return 0;
        }
        begining = 2;
    }
    if (strcmp(first_two, "IX") == 0)
    {
        number = 9;
        if (roman_numeral[2] == 'I')
        {
            return 0;
        }
        begining = 2;
    }
    if (strcmp(first_two, "XL") == 0)
    {
        number = 40;
        if (roman_numeral[2] == 'X')
        {
            return 0;
        }
        begining = 2;
    }
    if (strcmp(first_two, "XC") == 0)
    {
        number = 90;
        if (roman_numeral[2] == 'X')
        {
            return 0;
        }
        begining = 2;
    }
    if (strcmp(first_two, "CD") == 0)
    {
        number = 400;
        if (roman_numeral[2] == 'C')
        {
            return 0;
        }
        begining = 2;
    }
    if (strcmp(first_two, "CM") == 0)
    {
        number = 900;
        if (roman_numeral[2] == 'C')
        {
            return 0;
        }
        begining = 2;
    }

    int increment, old_increment = 10000;
    int number_of_D = 0;
    int number_of_C = 0;
    int number_of_L = 0;
    int number_of_X = 0;
    int number_of_V = 0;
    int number_of_I = 0;

    for (int i = begining; i < strlen(roman_numeral); i++)
    {
        if (roman_numeral[i] == 'M')
        {
            increment = 1000;
        }
        else if (roman_numeral[i] == 'D')
        {
            number_of_D++;
            increment = 500;
        }
        else if (roman_numeral[i] == 'C')
        {
            number_of_C++;
            increment = 100;
        }
        else if (roman_numeral[i] == 'L')
        {
            number_of_L++;
            increment = 50;
        }
        else if (roman_numeral[i] == 'X')
        {
            number_of_X++;
            increment = 10;
        }
        else if (roman_numeral[i] == 'V')
        {
            number_of_V++;
            increment = 5;
        }
        else if (roman_numeral[i] == 'I')
        {
            number_of_I++;
            increment = 1;
        }
        else
        {
            return 0;
        }

        number += increment;
        if (old_increment < increment)
        {
            return 0;
        }
        old_increment = increment;
    }

    if (number_of_I > 3 || number_of_X > 3 || number_of_C > 3)
    {
        return 0;
    }
    if (number_of_V > 1 || number_of_L > 1 || number_of_D > 1)
    {
        return 0;
    }

    if (number > 3999)
    {
        return 0;
    }

    printf("%d", number);

    return 0;
}