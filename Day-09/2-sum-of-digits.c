/*
Input: 897
Output: 24

Input: 123
Output: 6

*/

#include <stdio.h>
void main (){
    int n, digit, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &n);    // 987 654

    while(n!=0){
        digit = n % 10;        // 7     8       9    
        sum = sum + digit;     // 7     15      24
        n = n / 10;            // 98    9       0
    }
    
    printf("Sum of digits: %d", sum);
}
