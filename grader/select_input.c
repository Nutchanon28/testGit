#include <stdio.h>
#include <string.h>

void main()
{
    char stop_char;
    char text[1000];
    // scanf("%c", &stop_char);
    scanf("%c\n %[^\n]s", &stop_char, &text);

    // how do you do this????
    // printf("stop_char = %c\n", stop_char);
    // gets(text);
    // didn't work because scanf before??????
    // scanf("%[^\n]s", &text);
    // scanf("%[^%c]s",&text,stop_char);

    for (int i = 0; i < strlen(text); i++)
    {
        // printf("%c\n",text[i]);

        if (text[i] == stop_char)
        {
            break;
        }
        printf("%c", text[i]);

    }

    // printf("%s", text);
}