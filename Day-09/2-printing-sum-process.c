#include <stdio.h>
void main (){
    int n, digit, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &n);    // 987

    while(n!=0){
       printf("\nDigit: %d\t", digit = n % 10) ;   
       printf("Sum: %d\t\t", sum = sum + digit) ;   
       printf("Num: %d", n = n / 10) ;   
    }
    
    printf("\n\nSum of digits: %d", sum);
}