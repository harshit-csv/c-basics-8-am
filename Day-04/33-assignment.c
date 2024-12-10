#include <stdio.h>
void main (){
    int r = 8;

    int s = ++r + (r+=2);

    printf("%d ",s);
    printf("%d ", r + s);

}
// Anupam   (41 82)   (43 86)
// Sumit    (11, 19)
// Priya    (19, 28)   
// Suman    (19, 29)
// Rohit    (20, 21)










// (21,32)