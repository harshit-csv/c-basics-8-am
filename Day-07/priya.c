#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Simple Calculator\n");
    printf("Choose an operation (+, -, *, /) or press 'E' to exit.\n");

    while (1) {  // Infinite loop to keep the program running
        printf("\nEnter operator (+, -, *, /, E): ");
        scanf(" %c", &operator);

        // Exit condition
        if (operator == 'E' || operator == 'e') {
            printf("Exiting the program. Goodbye!\n");
            break;
        }

        // Input numbers
        printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);

        // Perform operation based on user input
        switch (operator) {
            case '+':
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;
            case '-':
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;
            case '*':
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Invalid operator. Please choose +, -, *, /, or E.\n");
        }
    }

    return 0;
}

/*

data1 po Data2      Result1 
data1 po Data2      Result2


data1
op
data2
op
data3
=
Res

*/