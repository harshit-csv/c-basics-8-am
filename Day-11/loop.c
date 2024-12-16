#include <stdio.h>
void main (){
    int count[10];

    for (int i = 0; i < 10; i++){
        count[i] = 0;
    }
        
    int n, digit, totalDigits = 0;
    printf("Enter the number: ");    
    scanf("%d",  &n); // 8798

    while(n!=0){
        digit = n % 10;
        n = n / 10;
        totalDigits++;
        for (int i = 0; i < 10; i++){
            if (digit == i) {
                count[i]++;
                break;
            }
        }
    }

    for(int i = 0; i < 10; i++){
        if(count[i]==0) continue;
        printf("Occurence of digit %d: %d\n", i, count[i]);
    }
    printf("\n\nTotal Number of digits: %d", totalDigits);
}