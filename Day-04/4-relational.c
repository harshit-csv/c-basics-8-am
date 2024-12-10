#include <stdio.h>
void main (){
    int a  = (67 == 65);
    int b  = (67 != 67);

    printf("Equal to: %d\n", a);
    printf("Not Equal to: %d\n", b);

    int l = (5 < 6);
    int g = (50 > 6);

    printf("Less than: %d\n", l);
    printf("Greater than: %d\n", g);

    int le = (4 <= 4);
    int ge = (5 >= 2);

    printf("Less than Equal to: %d\n", le);
    printf("Greater than Equal to: %d\n", ge);
}