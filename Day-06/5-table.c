#include <stdio.h>
void main (){
    int x,i = 1;
    printf("Enter the number: ");
    scanf("%d", &x);

    while(i<=10){
        printf("%d\n",x*i);
        i++;
    }
}