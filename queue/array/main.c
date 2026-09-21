#include <stdio.h>

int main() {

  printf("Welcome to Queue program:");

  int arr[50] = {0}, choice, front = -1, rear = -1;

  while (1) {

    printf("\n1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\n");
    printf("Please enter your choice: ");
    scanf("%d", &choice);
    printf("\n");

    switch (choice) {

    case 1:

      break;

    case 5:
      printf("Thank you!");
      return 0;

    default:
      printf("Please choose a valid option!");
    }
  }
}