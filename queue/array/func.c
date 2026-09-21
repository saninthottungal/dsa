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

  arr[++(*rear)] = data;

  printf("Element %d inserted successfully!", data);
}

bool isFull(int *arr, int front, int rear) { return rear >= MAX - 1; }
bool isEmpty(int *arr, int front, int rear) { return front == rear; }