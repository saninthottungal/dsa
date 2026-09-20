#include "func.h"
#include <stdio.h>

int main() {

  int choice;
  Node *head = NULL;

  printf("\nWelcome to the Double linked list program: ");

  while (1) {

    printf("\n\nEnter the action you want to perform:");
    printf("\n1. Insert\n2. Delete\n3. Update\n4. Search\n5. Display\n6. Exit");
    printf("\nEnter the action you want to perform: ");
    scanf("%d", &choice);
    printf("\n");

    switch (choice) {
    case 1:
      insertNode(&head);
      break;

    case 2:
      deleteNode(&head);
      break;

    case 3:
      updateNode(head);
      break;

    case 5:
      displayList(head);
      break;

    case 6:
      printf("Thank you!\n");
      return 0;

    default:
      printf("Entered invalid option, please try again.");
      break;
    }
  }

  return 0;
}