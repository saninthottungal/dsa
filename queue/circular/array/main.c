#include "func.h"
#include <stdio.h>

int main() {

  int choice;
  struct Queue q;

  initQueue(&q);

  printf("\nWelcome to Queue program:");

  while (1) {

    printf("\n\n1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\n");
    printf("Please enter your choice: ");
    scanf("%d", &choice);
    printf("\n");

    switch (choice) {

    case 1:
      enqueue(&q);
      break;

    case 2:
      dequeue(&q);
      break;

    case 3:
      peek(&q);
      break;

    case 4:
      display(&q);
      break;

    case 5:
      printf("Thank you!\n");
      return 0;

    default:
      printf("Please choose a valid option!");
    }
  }

  return 0;
}