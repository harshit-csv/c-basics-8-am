#include <stdio.h>
void main (){
    int n, digit, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &n);    // 654

    while(n!=0){
        digit = n % 10;
        printf("Digit: %d\tN: %d", digit, n ); 
        sum  = sum  + digit;
        n = n / 10;  
        printf("\tN: %d\n",  n ); 
    }
    
    printf("Sum of digits: %d", sum);
}