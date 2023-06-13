#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void initStack(Stack* stack) {
    stack->top = NULL;
}

int isStackEmpty(Stack* stack) {
    return stack->top == NULL;
}

void push(Stack* stack, double value) {
    StackNode* newNode = (StackNode*)malloc(sizeof(StackNode));
    if (newNode == NULL) {
        printf("Error: Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    newNode->data = value;
    newNode->next = stack->top;
    stack->top = newNode;
}

double pop(Stack* stack) {
    if (isStackEmpty(stack)) {
        printf("Error: Stack is empty\n");
        exit(EXIT_FAILURE);
    }

    StackNode* topNode = stack->top;
    double value = topNode->data;
    stack->top = topNode->next;
    free(topNode);
    return value;
}

double peek(Stack* stack) {
    if (isStackEmpty(stack)) {
        printf("Error: Stack is empty\n");
        exit(EXIT_FAILURE);
    }

    return stack->top->data;
}
