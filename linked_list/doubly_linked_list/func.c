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

void displayList(Node *head) {
  if (head == NULL) {
    printf("List is empty!");
    return;
  }

  Node *ptr = head;
  printf("The elements of List are:\n");
  while (ptr != NULL) {
    printf("Data: %d\n", ptr->data);
    ptr = ptr->next;
  }
}

void updateNode(Node *head) {
  if (head == NULL) {
    printf("List is empty!");
    return;
  }

  int oldData, newData;
  bool didFoundAny = false;
  Node *ptr = head;
  printf("Enter the element you want to update: ");
  scanf("%d", &oldData);
  printf("Enter the element you want to replace with: ");
  scanf("%d", &newData);

  while (ptr != NULL) {
    if (ptr->data == oldData) {
      ptr->data = newData;
      didFoundAny = true;
    } else {
      ptr = ptr->next;
    }
  }

  if (didFoundAny) {
    printf("Element %d got replaced with %d successfully!", oldData, newData);
  } else {
    printf("Element %d not found!", oldData);
  }
}

void searchNode(Node *head) {

  if (head == NULL) {
    printf("List is empty!");
    return;
  }

  int search, count = 1;
  printf("Enter the element you want to search: ");
  scanf("%d", &search);
  printf("\n");

  while (head != NULL) {
    if (head->data == search) {
      printf("Element %d found at position: %d\n", search, count);
    }

    count++;
    head = head->next;
  }
}