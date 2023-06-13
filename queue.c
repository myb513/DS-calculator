#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void initQueue(Queue* queue) {
    queue->front = NULL;
    queue->rear = NULL;
    queue->size = 0;
}

int isQueueEmpty(Queue* queue) {
    return queue->size == 0;
}

void enqueue(Queue* queue, double value) {
    QueueNode* newNode = (QueueNode*)malloc(sizeof(QueueNode));
    if (newNode == NULL) {
        printf("Error: Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    newNode->data = value;
    newNode->next = NULL;

    if (isQueueEmpty(queue)) {
        queue->front = newNode;
        queue->rear = newNode;
    }
    else {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }

    queue->size++;
}

double dequeue(Queue* queue) {
    if (isQueueEmpty(queue)) {
        printf("Error: Queue is empty\n");
        exit(EXIT_FAILURE);
    }

    QueueNode* frontNode = queue->front;
    double value = frontNode->data;

    queue->front = frontNode->next;
    free(frontNode);

    if (queue->front == NULL) {
        queue->rear = NULL;
    }

    queue->size--;
    return value;
}
