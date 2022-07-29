#include<stdio.h>
int main() {
    int A,B,H,distance = 0,day = 0;
    scanf("%d %d %d",&A,&B,&H);
    if (!((1 <= B) && (B < A) && (A <= H) && (H <= 1000000000)))
    {
        return 0;
    }

    while (distance < H)
    {
        day++;
        distance += A;
        if (distance >= H)
        {
            break;
        }
        distance -= B; 
    }
    // Time out for some reason? 

    printf("%d",day);
    
    return 0;
}