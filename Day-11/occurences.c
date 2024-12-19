#include <stdio.h>    
void main (){
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d0;    
    d1= d2 = d3 = d4  = d5  = d6  = d7 = d8 = d9 = d0 = 0;
        
    long long int n;
    int  digit, total = 0;
    printf("Enter the number: ");    
    scanf("%lld",  &n); // 8798

    while(n!=0){
        digit = n % 10;
        total ++;
        switch(digit)
        {
            case 1: d1++; break;
            case 2: d2++; break;
            case 3: d3++; break;
            case 4: d4++; break;
            case 5: d5++; break;
            case 6: d6++; break;
            case 7: d7++; break;
            case 8: d8++; break;
            case 9: d9++; break;
            case 0: d0++; break;
        }
        n = n / 10;
    }

    printf("\nOcuurence of digit 9: %d",d9);
    printf("\nOcuurence of digit 8: %d",d8);
    printf("\nOcuurence of digit 7: %d",d7);
    printf("\nOcuurence of digit 6: %d",d6);
    printf("\nOcuurence of digit 5: %d",d5);
    printf("\nOcuurence of digit 4: %d",d4);
    printf("\nOcuurence of digit 3: %d",d3);
    printf("\nOcuurence of digit 2: %d",d2);
    printf("\nOcuurence of digit 1: %d",d1);
    printf("\nOcuurence of digit 0: %d",d0);

    printf("\n\nTotal digits: %d", total);
}
