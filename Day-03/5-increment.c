#include <stdio.h>
void main (){

    int x = 10;

    printf("%d ", x++);         // (C = 10) (A = 11)
    printf("%d ", x--);         // (C = 11) (A = 10)
    printf("%d ", --x);         // (C = 9) (A = 9)

    int y = x++;
    printf("%d ", --y);     // (C = 8) (A = 9)
    
}

// Priya (10, 11, 9, 8)
// Suman (10, 11, 9, 8)
// Suman (10, 11, 9, 8)
// Suman (10, 11, 9, 8)