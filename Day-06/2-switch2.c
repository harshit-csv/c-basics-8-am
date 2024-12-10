#include <stdio.h>
void main (){
    char x;
    printf("Enter the letter: ");
    scanf("%c", &x);

    switch(x){
        case 'a':
            printf("Apple\n");
            break;
        case 'b':
            printf("Ball\n");
            break;
        case 'c':
            printf("Cat\n");
            break;
        case 'd':
            printf("Dog\n");
            break;
        case 'e':
            printf("Elephant\n");
            break;
    }
}