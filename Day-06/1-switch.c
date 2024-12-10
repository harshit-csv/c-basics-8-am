#include <stdio.h>
void main (){
    int x;

    abc:
    printf("\nEnter the number: ");
    scanf("%d", &x);

    switch(x){
        case 0:
            printf("\nZero");
            break;
        case 1:
            printf("\nOne");
            break;
        case 2:
            printf("\nTwo");
            break;
        case 3:
            printf("\nThree");
            break;
        case 4:
            printf("\nFour");
            break;
        case 5:
            printf("\nFive");
            break;
        case 6:
            printf("\nSix");
            break;
        case 7:
            printf("\nSeven");
            break;
        case 8:
            printf("\nEight");
            break;
        case 9:
            printf("\nNine");
            break;
        default: 
            if(x%2==0)  
                printf("\n%d is Even number.", x);
            else        
                printf("\n%d is Odd number.", x);
    }

    printf("\n--------------\nType 1: To Check More numbers\nType 0: To Exit\nEnter Choice: ");
    scanf("%d",&x);
    if(x) goto abc;

}

/*


0: Zero
1: One
2: Two
3: Three
..
..
9: Nine

9+ Odd / Even

*/