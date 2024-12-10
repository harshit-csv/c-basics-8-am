#include <stdio.h>
#include <unistd.h> // For read()
void main (){

    int temp, result = 0;
    char op, ln;

    abc:

    printf("Enter the Value: ");
    scanf("%d",&temp);

    printf("Opeation: ");
    read(0, &op, 1);

    switch(op){
        case '=':
            result += temp;   
            printf("Result = %d", result);
            break;
        case '+':
            result += temp;
            goto abc;
            break;
    }
}