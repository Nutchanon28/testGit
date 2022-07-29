#include<stdio.h>
int main() {
  int frame_size;
  do
  {
    scanf("%d",&frame_size);
  } while (frame_size < 1);

  for (int i = 0; i < frame_size; i++)
  {
    for (int j = 0; j < frame_size; j++)
    {
        if (i > 0 && i < frame_size-1)
        {
            if (j == 0 || j == frame_size-1)
            {
                printf("*");
            }else{
                printf(" ");
            }
            
            continue;
        }
        printf("*");
    }
    printf("\n");
  }
  return 0;
}