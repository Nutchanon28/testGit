#include<stdio.h>
#include<string.h>

void main(){
    char str1[100],str2[100];
    printf("input your first string: ");
    scanf("%s",&str1);
    printf("input your second string: ");
    scanf("%s",&str2);

    if (strcmp(str1,str2) == 0)
    {
        printf("YES");
    }else{
        printf("NO");
    }
    
}