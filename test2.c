#include<stdio.h>
int main() {
  int bit;
  do
  {
    scanf("%d",&bit);
  } while (!(24<bit && bit<30));
  
  scanf("%d",&bit);
  if(!(24<bit && bit<30)){
    printf("error");
  }
  int n = 32 - bit;
  printf("n = %d\n",n);
  int two_powered_by_n = 1;
  int i;
  for (i = 0; i < n; i++)
  {
    two_powered_by_n*=2;
  }
  
  int number_of_host = two_powered_by_n - 2;
  printf("%d",number_of_host);
  return 0;
}



// int main() {
//   int bit;
//   scanf("%d",&bit);
//   if(!(24<bit && bit<30)){
//     printf("error");
//     return 0;
//   }
//   int n = 32 - bit;
//   printf("n = %d\n",n);
//   int two_powered_by_n = 1;
//   int i;
//   for (i = 0; i < n; i++)
//   {
//     two_powered_by_n*=2;
//   }
  
//   int number_of_host = two_powered_by_n - 2;
//   printf("%d",number_of_host);
//   return 0;
// }