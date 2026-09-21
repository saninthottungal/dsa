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

void pop(int *arr, int *top) {
  if (*top <= -1) {
    printf("Stack underflow!");
    return;
  }

  int deletedEl = arr[*top];
  (*top)--;

  printf("Element %d popped from stack!", deletedEl);
}

void display(int *arr, int *top) {
  if (*top <= -1) {
    printf("Stack underflow!");
    return;
  }

  printf("The elements of stack are: \n");
  for (int i = *top; i >= 0; i--) {
    printf("Data: %d\n", arr[i]);
  }
}