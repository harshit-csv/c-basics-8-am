// Enter Cost Price: 
// Enter Selling Price: 

// Profit: 100         // Loss: 200

#include <stdio.h>
void main (){
    int cp, sp;
    float profit, loss, pp, lp;
    printf("Enter the selling Price: ");
    scanf("%d",&sp);

    printf("Enter the cost Price: ");
    scanf("%d",&cp);

    if(sp > cp){
        profit = sp - cp;
        pp = (profit/cp) * 100;
        printf("Profit: Rs.%.0f\n", profit );
        printf("Profit Percentage: %.0f%c", pp, 37);
    }
    else if(cp > sp){
        loss = cp - sp;
        lp = (loss/cp) * 100;
        printf("Loss: Rs.%.0f\n", loss);
        printf("Loss Percentage: %.0f%c", lp, 37);
    }
    else{
        printf("No Profit, No Loss");
    }
}

