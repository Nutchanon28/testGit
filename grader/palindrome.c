#include <stdio.h>
#include <string.h>

int main()
{
    char str[70];
    printf("Enter the string to check if it is a palindrome\n");
    scanf("%[0-9]s", &str);

    int str_length = strlen(str);
    char str_without_zero[70];

    for (int i = 0; i < str_length; i++)
    {
        if (str[i] != '0')
        {
            int str_without_zero_length = strlen(str) - i;

            for (int j = 0; j < str_without_zero_length; j++)
            {
                // printf("str[i + j] = %c\n",str[i + j]);
                str_without_zero[j] = str[i + j];
            }
            str_without_zero[str_without_zero_length] = '\0';

            break;
        }

        if (i == str_length - 1)
        {
            printf("0 is PALINDROME");
            return 0;
        }
    }

    int str_without_zero_length = strlen(str_without_zero);
    int middle = strlen(str_without_zero) / 2 + 1;
    // printf("middle = %d\n", middle);
    for (int i = 0; i < middle; i++)
    {
        // printf("str_without_zero[i] = %c\n",str_without_zero[i]);

        // strcmp error!?
        // if (strcmp(str[i], str[str_length - 1 - i]) == 0)
        if (str_without_zero[i] != str_without_zero[str_without_zero_length - 1 - i])
        {
            printf("%s is NOT PALINDROME", str_without_zero);
            return 0;
        }
    }

    printf("%s is PALINDROME", str_without_zero);
    return 0;
}