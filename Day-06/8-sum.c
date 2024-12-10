#include <stdio.h>
void main (){
    int n, temp, sum = 0;
    printf("Enter the number: ");
    scanf("%d",&n);

    
    for(int i = 1; i <= n; i++){
        scanf("%d",&temp);
        sum = sum + temp;
    }

    printf("Sum = %d", sum);
}



/*

Enter the number: 4
54
67
23
76
Sum = 222

-----------------------------------

Enter the number: 3
5
6
2
Product = 60

*/