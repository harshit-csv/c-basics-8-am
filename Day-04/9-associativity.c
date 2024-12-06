#include <stdio.h>
void main (){
    int x  = 3;

    int r = (++x) + (x++);

    printf("%d", r);
}