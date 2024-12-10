// 1 to n (Even number)

#include <stdio.h>
void main (){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    int x = 2;
    while(x <= n){
        printf("%d\n",x);
        x+=2;
    }
}