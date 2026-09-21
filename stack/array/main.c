#include "func.h"
#include <stdio.h>

#ifndef MAX
#define MAX 50
#endif

int main() {

  int arr[MAX] = {0}, choice, top = 0;

  while (1) {

    printf("\n\nPlease choose an option: ");
    printf("\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("\n");

    switch (choice) {
    case 1:
      push(arr, &top, MAX);
      break;

    case 5:
      return 0;

    default:
      printf("Please enter a valid option!");
    }
  }
}