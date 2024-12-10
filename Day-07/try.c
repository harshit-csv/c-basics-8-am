#include <stdio.h>

int main() {
    int n, i;
    char ch;

    printf("Enter the number of characters to input: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter a character: ");
        scanf(" %c", &ch); // Note the space before %c
        printf("You entered: %c\n", ch);
    }

    return 0;
}
