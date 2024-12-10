#include <stdio.h>
void main (){
    int temp, sum = 0;
    printf(("Enter the numbers, or '0' to get Result\n"));

    do
    {
        printf("Next Number: ");
        scanf("%d",&temp);
        sum += temp;
    } while(temp!=0);

    printf("Sum = %d",sum); 
}