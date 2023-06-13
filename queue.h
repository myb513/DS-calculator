typedef struct QueueNode {
    double data;
    struct QueueNode* next;
} QueueNode;

typedef struct {
    QueueNode* front;
    QueueNode* rear;
    int size;
} Queue;

void enqueue(Queue* queue, double value);
double dequeue(Queue* queue);
int isQueueEmpty(Queue* queue);
void initQueue(Queue* queue);
