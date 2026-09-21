#include "func.h"
#include <stdio.h>

void enqueue(int *arr, int *front, int *rear) {
  if (isFull(arr, *front, *rear)) {
    printf("Queue is full!");
    return;
  }

  int data;
  printf("Enter the element to insert: ");
  scanf("%d", &data);

  if (*front < 0)
    (*front)++;

  arr[++(*rear)] = data;

  printf("Element %d inserted successfully!", data);
}

void dequeue(int *arr, int *front, int *rear) {
  if (isEmpty(arr, *front, *rear)) {
    printf("Queue is empty!");
    return;
  }

  (*front)++;
}

void peek(int *arr, int front, int rear) {
  if (isEmpty(arr, front, rear)) {
    printf("Queue is empty!");
    return;
  }

  printf("Peek: %d", arr[front]);
}

void display(int *arr, int front, int rear) {
  if (isEmpty(arr, front, rear)) {
    printf("Queue is empty!");
    return;
  }

  for (int i = front; i <= rear; i++) {
    printf("%d ", arr[i]);
  }
}

bool isFull(int *arr, int front, int rear) { return rear >= MAX - 1; }
bool isEmpty(int *arr, int front, int rear) { return front > rear; }