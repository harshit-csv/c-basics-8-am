#include <stdio.h>
void main (){
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);

    int i = 1;
    while(i<=10){
        printf("%d x %d = %d\n",x,i, x*i);
        i++;
    }
}

/*


X x i = (x*i)

2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
2 x 4 = 8
2 x 5 = 10
2 x 6 = 12
2 x 7 = 14
2 x 8 = 16
2 x 9 = 18
2 x 10 = 20


*/