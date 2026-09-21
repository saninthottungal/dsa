#ifndef FUNC_H
#define FUNC_H

#define MAX 50

#include <stdbool.h>

void enqueue(int *arr, int *front, int *rear);
void dequeue(int *arr, int *front, int *rear);

void peek(int *arr, int front, int rear);
void display(int *arr, int front, int rear);
bool isFull(int *arr, int front, int rear);
bool isEmpty(int *arr, int front, int rear);

#endif