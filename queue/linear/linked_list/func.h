#ifndef FUNC_H
#define FUNC_H

struct Node {
  int data;
  struct Node *next;
};

void enqueue(struct Node **q);
void dequeue(struct Node *q);
void peek(struct Node *q);
void display(struct Node *q);
int isEmpty(struct Node *q);

#endif