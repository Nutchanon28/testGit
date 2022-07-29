#include<stdio.h>
#include<string.h>

void main(){
    // char str[1000] = "dame da ne dame yo dame na no yo";
    // int str_length = strlen(str);
    // printf("%d", str_length);

    // char str1[] = "ABCDEFG";
    // char str2[] = "ABCDEFG";
    // char str3[] = "HIJKLMN";
    // int result;

    // result = strcmp(str1,str2);
    // printf("strcmp(str1,str2) = %d\n", result);  

    // result = strcmp(str1,str3);
    // printf("strcmp(str1,str3) = %d\n", result);  

    char str1[] = "I love", str2[] = "my cat";
    strcat(str1, str2);

    printf("str1 = %s", str1);
    printf("\nstr2 = %s", str2);
}