#include "func.h"
#include <stdio.h>
#include <stdlib.h>

void initQueue(struct Queue *q) {
  q->front = NULL;
  q->rear = NULL;
  q->count = 0;
}

void enqueue(struct Queue *q) {
  int data;

  printf("Enter element for enqueue: ");
  scanf("%d", &data);

  struct Node *node = (struct Node *)malloc(sizeof(struct Node));
  node->data = data;
  node->next = NULL;

  if (isEmpty(q)) {
    q->front = node;
    q->rear = node;
  } else {
    q->rear->next = node;
    q->rear = node;
  }
}

void dequeue(struct Queue *q) {}

void peek(struct Queue *q) {
  if (isEmpty(q)) {
    return;
  }

  printf("The last inserted element is: %d", q->rear->data);
}

void display(struct Queue *q) {
  struct Node *temp = q->front;

  while (temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->next;
  }
}

int isEmpty(struct Queue *q) {

  if (q->front == NULL) {
    printf("Queue is Empty!");
    return 1;
  }

  return 0;
}
