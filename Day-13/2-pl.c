// Enter Cost Price: 
// Enter Selling Price: 

// Profit: 100         // Loss: 200

#include <stdio.h>
void main (){
    int cp, sp;
    printf("Enter the selling Price: ");
    scanf("%d",&sp);

    printf("Enter the cost Price: ");
    scanf("%d",&cp);

    if(sp > cp){
        printf("Profit: %d", sp-cp );
    }
    else if(cp > sp){
        printf("Loss: %d", cp-sp );
    }
    else{
        printf("No Profit, No Loss");
    }
}
