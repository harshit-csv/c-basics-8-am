#include <stdio.h>
#include <unistd.h> // For read()
void main()
{
    int temp, result = 0;
    char op, ocp;

    do
    {
        printf("Next Value: ");
        scanf("%d", &temp);
        ocp = op;
        printf("Operation: ");
        scanf(" %c", &op);

        switch (op)
        {
        case '+':
            result += temp;
            break;
        case '-':
            result -= temp;
            break;
        case '*':
            result *= temp;
            break;
        case '/':
            result /= temp;
            break;
        case '=':
            goto res;
        }
    } while (1);

res:
    switch (ocp)
    {
    case '+':
        result += temp;
        break;
    case '-':
        result -= temp;
        break;
    case '*':
        result *= temp;
        break;
    case '/':
        result /= temp;
        break;
    case '=':
        goto res;
    }
    printf("Result = %d", result);
}

/*

a \n



23 +
23 +
23 +
22 =
Result =

*/