/*
Input: 73248
Output: 5
*/

#include <stdio.h>
void main (){
    int n, count = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    while(n!=0){
        n = n / 10;
        count++;
    }

    printf("Count: %d", count);
}