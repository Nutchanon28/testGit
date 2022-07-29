#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    char str_copy[1000];
    scanf("%[^\n]s", &str);

    strcpy(str_copy, str);
    for (int i = 0; i < strlen(str); i++)
    {
        str_copy[i] = str[strlen(str) - 1 - i];
    }

    printf("%s", str_copy);

    return 0;
}