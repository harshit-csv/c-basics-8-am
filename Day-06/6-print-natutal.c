// 1 to n (Natural Number)
#include <stdio.h>
void main (){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    int x = 1;
    while(x <= n){
        printf("%d\n",x);
        x++;
    }
}