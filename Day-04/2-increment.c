#include <stdio.h>
void main (){
    int x = 89;

    x--;    // x = x - 1    // Post Decrement
    x++;    // x = x + 1    // Post Increment


    printf("%d\n", x);      // x = 89

    printf("%d\n",++x);     // x = 90   // Pre Increment
    printf("%d\n",--x);     // x = 89   // Pre Decrement

}

