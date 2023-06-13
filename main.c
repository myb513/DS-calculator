#include <stdio.h>
#include "calc.h"


int main() {


    while (1) {
        char expression[100];

        /* Wait for string input */
        printf(">> ");
        fgets(expression, sizeof(expression), stdin);


        /* Cases of confusion between operators and operands */
        if (checkOperandExeception(expression)) {
            continue;
        }

        /* Press [enter] to exit the program */
        else if (expression[0] == '\n') {
            printf("[terminated]\n");
            break;
        }
        
        /* Remove newline character */
        expression[strcspn(expression, "\n")] = '\0';

        /* Calculate */
        evaluateExpression(expression);
    }

    return 0;
}
