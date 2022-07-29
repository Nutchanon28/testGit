#include<stdio.h>
int main() {
    int sixty_one = 61;
    int binary_number = 0;
    int i = 1;
    while(sixty_one!=1){
        int zero_or_one = sixty_one%2;
        int number = i;
        binary_number+=number;
        printf("%d\n",binary_number);
        sixty_one/=2;
        i *= 10;
    }
    printf("%d\n",binary_number);
    return 0;
}

//   int sum = 0,i;
//   for(i=66;i<=5648;i+=2){
// //   for(i=66;i<=5648;i=i+2){
//     sum+=i;
//     printf("i = %d",i);
//   }
//   printf("sum = %d",sum);