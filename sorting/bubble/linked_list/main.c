#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *next;
} Node;

void displayList(Node *ptr) {
  printf("Elements of List are: \n");
  while (ptr != NULL) {
    printf("%d ", ptr->data);
    ptr = ptr->next;
  }

  printf("\n\n");
}

void sortList(Node *ptr) {
  int swapped = 1, dataTemp;

  while (swapped) {
    swapped = 0;
    Node *temp = ptr;

    while (temp->next != NULL) {
      if (temp->data > temp->next->data) {
        dataTemp = temp->data;
        temp->data = temp->next->data;
        temp->next->data = dataTemp;
        swapped = 1;
      }
      temp = temp->next;
    }
  }
}

int main() {
  int arr[50] = {7, 20, 12, 9, 1, 4, 3, 8}, count = 8;

  Node *head = malloc(sizeof(Node));
  head->data = arr[0];
  head->next = NULL;
  Node *ptr = head;

  for (int i = 1; i < count; i++) {
    Node *temp = malloc(sizeof(Node));
    temp->data = arr[i];
    temp->next = NULL;

    ptr->next = temp;
    ptr = temp;
  }

  displayList(head);

  sortList(head);

  displayList(head);

  printf("\n");
  return 0;
}