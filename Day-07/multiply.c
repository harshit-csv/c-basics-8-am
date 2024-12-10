#include <stdio.h>
void main (){
    int n, temp, pro = 1;
    printf(("Enter the numbers, or '1' to get Result\n"));

    do
    {
        printf("Next Number: ");
        scanf("%d",&temp);
        pro *= temp;
    } while(temp!=1);

    printf("Product = %d",pro); 
}