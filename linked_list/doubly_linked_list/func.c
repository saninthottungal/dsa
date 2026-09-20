#include "func.h"
#include <stdio.h>
#include <stdlib.h>

void insertNode(Node **head) {
  int data;
  printf("Enter the element you want to insert: ");
  scanf("%d", &data);

  Node *newNode = (Node *)malloc(sizeof(Node));
  if (newNode == NULL) {
    printf("Failed to allocate memory!");
    return;
  }

  newNode->prev = NULL;
  newNode->data = data;
  newNode->next = NULL;

  if (*head == NULL) {
    *head = newNode;

  } else {
    Node *ptr = *head;
    while (ptr->next != NULL) {
      ptr = ptr->next;
    }

    ptr->next = newNode;
  }

  printf("Inserted new element %d successfully.", data);
}