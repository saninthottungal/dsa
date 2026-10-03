#include "func.h"
#include <stdio.h>

void initQueue(struct Queue *q) {
  q->front = 0;
  q->rear = -1;
  q->count = 0;
}