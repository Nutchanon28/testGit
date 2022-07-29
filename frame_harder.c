#include <stdio.h>
// void main(){
//     int frame_size;
//     scanf("%d",&frame_size);
//     for (int i = 0; i < frame_size; i++)
//     {
//         for (int j = 0; j < i+1; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

// }

// void main(){
//     int frame_size;
//     scanf("%d",&frame_size);
//     for (int i = 0; i < frame_size; i++)
//     {
//         for (int j = 0; j < frame_size; j++)
//         {
//             if (j < i)
//             {
//                 printf(" ");
//             }else{
//                 printf("*");
//             }

//         }
//         printf("\n");
//     }

// }

// void main(){
//     int frame_size;
//     scanf("%d",&frame_size);
//     for (int i = 0; i < frame_size; i++)
//     {
//         for (int j = 0; j < frame_size; j++)
//         {
//             if (j < i)
//             {
//                 printf(" ");
//             }else{
//                 printf("*");
//             }

//         }
//         printf("\n");
//     }

// }

// void main()
// {
//     int frame_size;
//     scanf("%d", &frame_size);
//     for (int i = 0; i < frame_size; i++)
//     {
//         for (int j = 0; j < frame_size; j++)
//         {
//             if (i > 0)
//             {
//                 // printf(" ");
//                 // if (j == frame_size - 1)
//                 if (j == frame_size - 1 || j == i)
//                 {
//                     printf("*");
//                 }
//                 else
//                 {
//                     printf(" ");
//                 }
//             }
//             else
//             {
//                 printf("*");
//             }
//         }
//         printf("\n");
//     }
// }

void main()
{
    int frame_size;
    scanf("%d", &frame_size);
    // printf("frame_size * frame_size = %d",frame_size * frame_size);
    int frame_size_square = frame_size * frame_size;
    int space_before_star = 1;
    // for (int i = 1; i <= frame_size * frame_size; i++)
    for (int i = 1; i <= frame_size_square; i++)
    {
        if (i <= frame_size)
        {
            printf("*");
        }

        if (i > frame_size)
        {
            if (i % frame_size == 0 || i % frame_size == space_before_star)
            {
                printf("*");
            }else{
                printf(" ");
            }
        }

        if (i % frame_size == 0)
        {
            printf("\n");
            space_before_star++;
        }
    }
}