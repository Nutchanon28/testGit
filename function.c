#include <stdio.h>

void rickRoll(char *message, int number);

int main()
{
    rickRoll("from gym, with love ", 69);
    rickRoll("from gym, with love ", -9);
    return 0;
}

void rickRoll(char *message, int number){
    if (number < 0)
    {
        return;
    }
    
    printf("Never gonna give you up\n");
    printf("Never gonna let you down\n");
    printf("Never gonna run around and desert you\n");
    // printf("%s %d", *message, number);
    
    // didn't work
    printf("%s", message);
    printf("%d", number);
    return;
}

