#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter the string to check if it is a palindrome\n");
    scanf("%s", &str);

    int str_length = strlen(str);
    int middle = strlen(str) / 2 + 1;
    for (int i = 0; i < middle; i++)
    {
        // strcmp error!?
        // if (strcmp(str[i], str[str_length - 1 - i]) == 0)
        if (str[i] != str[str_length - 1 - i])
        {
            printf("NO");
            return 0;
        }
    }

    printf("YES");
    return 0;
}