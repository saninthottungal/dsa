#include "func.h"
#include <stdio.h>

int main(void) {

  int choice;
  struct Node *head;

  while (1) {
    printf("\n\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.EXit\n");
    printf("Choose your option: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      break;

    case 2:
      break;

    case 3:
      break;

    case 4:
      break;

    case 5:
      return 0;

    default:
      printf("Invalid option selected, please try again.\n");
      return 0;
    }
  }

  return 0;
}