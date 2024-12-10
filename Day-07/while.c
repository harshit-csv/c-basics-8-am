#include <stdio.h>
#include <unistd.h> // For read()
void main (){
    int temp, result = 0;
    char op, cop;

    do{
        printf("Next Value: ");
        scanf("%d", &temp);

        printf("Operation: ");
        read(0, &cop, 1);

        switch(op){
            case '+':
                result += temp;
                break;
            case '=':
                result += temp;
                goto res;
                break;
        }
        
    } while(1);

    res:
    printf("Result = %d",result);
}




/*

a \n



23 + 
23 + 
23 + 
22 = 
Result = 

*/