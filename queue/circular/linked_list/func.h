#ifndef FUNC_H
#define FUNC_H

struct Node {
  int data;
  struct Node *next;
};

struct Queue {
  struct Node *rear;
};

void initQueue(struct Queue *q);
void enqueue(struct Queue *q, int value);
void dequeue(struct Queue *q);
void display(struct Queue *q);
int isEmpty(struct Queue *q);

#endif