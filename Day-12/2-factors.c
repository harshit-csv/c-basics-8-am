#include <stdio.h>
void main (){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++){
        if(n%i != 0) continue;
        printf("%d ", i);
    }
}