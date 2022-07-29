#include<stdio.h>
int main() {
    float height;
    int weight;
    do
    {
        printf("input your height (m)\n");
        scanf("%f",&height);
        printf("input your weight (kg)\n");
        scanf("%d",&weight);
    } while (height<=0 || weight<=0);

    float bmi = (float)weight/height/height;
    printf("bmi = %f",bmi);
    return 0;
}