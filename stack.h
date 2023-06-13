typedef struct StackNode {
    double data;
    struct StackNode* next;
} StackNode;

typedef struct {
    StackNode* top;
} Stack;

void push(Stack* stack, double value);
double pop(Stack* stack);
int isStackEmpty(Stack* stack);
void initStack(Stack* stack);
double peek(Stack* stack);
