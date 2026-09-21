#include "func.h"
#include <stdio.h>

void push(int *arr, int *top, int max) {
  if (*top >= max - 1) {
    printf("Stack overflow");
    return;
  }

  int data;
  printf("Enter the data to push: ");
  scanf("%d", &data);

  arr[++(*top)] = data;
  printf("Element %d pushed successfully!", data);
}