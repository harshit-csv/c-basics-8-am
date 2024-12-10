#include <stdio.h>
void main (){
    int n, temp, sum = 0;
    printf(("Enter the number of elements: "));
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&temp);
        sum += temp;
    }

    printf("Sum = %d",sum); 
}

/*

5
14
19
0
Sum = 38


*/