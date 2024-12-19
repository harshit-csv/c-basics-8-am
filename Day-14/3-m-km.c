/*
Enter the distance in m: 1300
Output: 1Km 300m
*/

#include <stdio.h>
void main (){
    int m, km, cm;
    printf("Enter the value in m: ");
    scanf("%d", &m);

    km = m / 1000;
    m = m % 1000;

    cm = m % 100;
    m = m - cm;

    printf("%dkm %dm %dcm", km, m, cm);
}