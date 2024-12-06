#include <stdio.h>
void main (){
    int x = 9;

    x += 9;     // x = x + 9;   // 18
    x -= 9;     // x = x - 9;   // 0
    x *= 9;     // x = x * 9;   // 81
    x /= 9;     // x = x / 9;   // 9
    x %= 9;     // x = x % 9;   // 0

    printf("%d",x);
}