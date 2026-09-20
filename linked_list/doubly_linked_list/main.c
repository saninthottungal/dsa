#include "func.h"
#include <stdio.h>

int main() {

  int choice;
  Node *head = NULL;

  printf("\nWelcome to the Double linked list program: ");

  while (1) {

    printf("\n\nEnter the action you want to perform:");
    printf(
        "\n1. Insert\n2. Delete\n 3. Update\n 4. Search\n5. Search\n6. Exit");
    printf("\nEnter the action you want to perform: ");
    scanf("%d", &choice);
    printf("\n");

    switch (choice) {
    case 1:
      insertNode(&head);

      break;

    default:
      printf("Entered invalid option, please try again.");
      break;
    }
  }

  return 0;
}