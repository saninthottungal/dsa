#ifndef FUNC_H
#define FUNC_H

struct Node {
  int data;
  struct Node *next;
};

struct Queue {
  struct Node *front;
  struct Node *tail;
  int count;
};

void enqueue(struct Queue *q);
void dequeue(struct Queue *q);
void peek(struct Queue *q);
void display(struct Queue *q);
int isEmpty(struct Queue *q);

#endif