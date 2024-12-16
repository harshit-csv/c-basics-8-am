#include <stdio.h>
void main (){
    int arr[] = {1, 5, 6, 40, 12, 18, 19};
    // int arr[] = {7, 8, 9};
    int n = sizeof(arr) / sizeof(int);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("(%d, %d) ", arr[i], arr[j]);
        }
        printf("\n");
    } 
    
}

/*

Step 1: Iterations of loops (i : 3) (j : 3)
*/