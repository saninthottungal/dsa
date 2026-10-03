#ifndef FUNC_H
#define FUNC_H

#define MAX 50

struct Queue {
  int arr[MAX];
  int front;
  int rear;
  int count;
};

void initQueue(struct Queue *q);
void enqueue(struct Queue *q);
void dequeue(struct Queue *q);
void display(struct Queue *q);
void peek(struct Queue *q);
int isFull(struct Queue *q);
int isEmpty(struct Queue *q);

#endif