#include "func.h"
#include <_stdio.h>
#include <stdio.h>

void initQueue(struct Queue *q) { q->rear = NULL; }

void enqueue(struct Queue *q) {}

void dequeue(struct Queue *q) {}

void display(struct Queue *q) {}

int isEmpty(struct Queue *q) {
  if (q->rear == NULL) {
    printf("Queue is empty!");
    return 1;
  }

  return 0;
}