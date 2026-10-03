#include "func.h"
#include <stdio.h>

void initQueue(struct Queue *q) {
  q->front = 0;
  q->rear = -1;
  q->count = 0;
}

void enqueue(struct Queue *q) {

  if (isFull(q)) {
    return;
  }

  int data;
  printf("Enter the element you want to enqueue: ");
  scanf("%d", &data);

  q->rear = (q->rear + 1) % MAX;
  q->arr[q->rear] = data;
  q->count++;

  printf("Element %d enqueued!", data);
}

void dequeue(struct Queue *q) {
  if (isEmpty(q)) {
    return;
  }

  q->front = (q->front + 1) % MAX;
  q->count--;

  printf("Element dequeued!");
}

void display(struct Queue *q) {}

void peek(struct Queue *q) {
  if (isEmpty(q)) {
    return;
  }

  printf("Last inserted element is: %d", q->arr[q->rear]);
}

int isEmpty(struct Queue *q) {
  if (q->count <= 0) {
    printf("Queue is empty!");
    return 1;
  }

  return 0;
}

int isFull(struct Queue *q) {
  if (q->count >= MAX) {
    printf("Queue is full!");
    return 1;
  }

  return 0;
}