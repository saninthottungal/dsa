#ifndef FUNC_H
#define FUNC_H
#endif

typedef struct Node {
  int data;
  struct Node *prev;
  struct Node *next;
} Node;

void insertNode(Node **head);
void deleteNode(Node **head);
void displayList(Node *head);