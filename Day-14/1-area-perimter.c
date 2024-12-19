// Square

/*

Input side: 10
Area: 100
Perimeter: 40

*/
#include <stdio.h>
#include <stdlib.h>
void main (){
    int s;
    printf("Input side: ");
    scanf("%d", &s);

    int area = s * s;
    int perimter = 4 * s;

    printf("\033[0;31m");
    printf("Area: %d\n", area);
    
    printf("\033[0;32m");
    printf("Perimeter: %d", perimter);

    printf("\033[0;0m");
}