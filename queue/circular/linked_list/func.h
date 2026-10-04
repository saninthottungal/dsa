#ifndef FUNC_H
#define FUNC_H

struct Node {
  int data;
  struct Node *next;
};

struct Queue {
  struct Node *front;
  struct Node *rear;
};

void enqueue(Queue *q);
void dequeue(Queue *q);
void display(Queue *q);
int isEmpty(Queue *q);

#endif