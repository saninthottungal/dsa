#include "func.h"
#include <stdio.h>

int main() {

  printf("\nWelcome to Queue program:");

  int arr[MAX] = {0}, choice, front = -1, rear = -1;

  while (1) {

    printf("\n\n1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\n");
    printf("Please enter your choice: ");
    scanf("%d", &choice);
    printf("\n");

    switch (choice) {

    case 1:
      enqueue(arr, &front, &rear);
      break;

    case 2:
      dequeue(arr, &front, &rear);
      break;

    case 3:
      peek(arr, front, rear);
      break;

    case 4:
      display(arr, front, rear);
      break;

    case 5:
      printf("Thank you!\n");
      return 0;

    default:
      printf("Please choose a valid option!");
    }
  }
}