#include "func.h"
#include <stdbool.h>
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

void deleteNode(Node **head) {
  if (*head == NULL) {
    printf("List is empty!");
    return;
  }

  int data;
  printf("Enter the element you want to delete: ");
  scanf("%d", &data);

  Node *ptr = *head;
  bool isDeletedAny = false;

  while (ptr != NULL) {
    // handling first element
    if (ptr->data == data && ptr == *head) {
      *head = ptr->next;
      (**head).prev = NULL;
      free(ptr);
      isDeletedAny = true;

      ptr = *head;
    } else if (ptr->data == data) {
      ptr->prev->next = ptr->next;
      Node *temp = ptr;
      ptr = ptr->next;

      free(temp);
      isDeletedAny = true;

    } else {
      ptr = ptr->next;
    }
  }

  if (isDeletedAny) {
    printf("Element %d got deleted successfully!", data);
  } else {
    printf("Element %d not found!", data);
  }
}