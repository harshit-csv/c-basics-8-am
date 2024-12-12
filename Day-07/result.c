#include <stdio.h>
void main (){
    int temp, result = 0;
    char op, ocp;

    abc:
    printf("Enter the Value: ");
    scanf("%d",&temp);

    ocp = op;
    printf("Opeation: ");
    scanf(" %c", &op);

    if(op == '='){
        op = ocp;
    }

    switch(op){
        case '+':
            result += temp;
            goto abc;
            break;
        case '-':
            result -= temp;
            goto abc;
            break;
    }
    
}