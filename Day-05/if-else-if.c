#include <stdio.h>
void main (){

    int x;
    abc:
    printf("Enter the marks: "); 
    scanf("%d", &x);

    if(0 <= x && x < 33){
        printf("Fail");
    }
    else if(33 <= x && x < 40){
        printf("Pass with Grade: D");
    }
    else if(40 <= x && x < 60){
        printf("Pass with Grade: C");
    }
    else if(60 <= x && x < 80){
        printf("Pass with Grade: B");
    }
    else if(80 <= x && x <= 100){
        printf("Pass with Grade: A");
    }
    else {
        printf ("Invalid Marks, Try again\n");
        goto abc;
    }

    printf("\nEnter any value to exit:  ");
    scanf("%d", &x);
}



/*

Grade !!






*/



/*

if (x % 2 == 0){
    printf("Even ");
}
else {
    printf("Odd ");
}

*/