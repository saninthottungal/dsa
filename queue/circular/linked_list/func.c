#include "func.h"
#include <_stdio.h>
#include <stdio.h>
#include <stdlib.h>

void initQueue(struct Queue *q) {
  q->rear = NULL;
  return;
}

void enqueue(struct Queue *q, int value) {
  struct Node *node = (struct Node *)malloc(sizeof(struct Node));
  node->data = value;
  node->next = NULL;

  if (isEmpty(q)) {
    q->rear = node;
    q->rear->next = node;

  } else {
    q->rear->next = node;
    node->next = q->rear;
    q->rear = q->rear->next;
  }
}

void dequeue(struct Queue *q) {}

void display(struct Queue *q) {
  if (isEmpty(q)) {
    return;
  }

  struct Node *temp = q->rear;

  do {
    printf("%d ", temp->data);
    temp = temp->next;
  } while (temp != q->rear);
}

int isEmpty(struct Queue *q) {
  if (q->rear == NULL) {
    printf("Queue is empty!");
    return 1;
  }

  return 0;
}