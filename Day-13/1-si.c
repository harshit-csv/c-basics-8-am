// Simple Interest (P, R, T) / 100 (साधारण ब्याज)
// Simple Interest: 200

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int p, r, t, si;
    printf("Enter the Principal, Rate & Time\n");
    scanf("%d%d%d", &p, &r, &t);

    si = (p*r*t) / 100;
    printf("Simple Interest: %d", si);

    return 0;
}