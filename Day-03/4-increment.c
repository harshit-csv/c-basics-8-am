#include <stdio.h>
void main (){
    int x = 10;
    int y = 10;

    printf("Pre Increment Position: %d\n", ++x);
    printf("Post Increment Position: %d\n", y++);

    printf("X = %d, Y = %d\n\n", x, y); // X = 11, y = 11

    printf("\nResult = %d",(x++ + y--)); // 22     (X = 12, Y = 10)

    printf("\nResult = %d",(x++ + y--)); // 22      (X = 13, Y = 9)

    printf("\nResult = %d",(x++ + --y)); // 21      (x = 14, y = 8)
}

// 12 = , 14 = , 16 = 

// (v1,v2,v3)
// Anupam   (21, 21, 22)
// Priya    (22, 22, 21)
// Suman    (21, 21, 21)
// Shalini  (23, 23, 22)
// Nisha    (22, 22, 23)
// Aanchal  (21, 21, 19)
// Ruchika  ()
// Nikita   ()
// Sumit    (22, 22, 21)