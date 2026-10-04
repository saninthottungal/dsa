#include "func.h"
#include <stdio.h>

int main(void) {
  struct Queue q;
  initQueue(&q);

  enqueue(&q, 10);
  enqueue(&q, 20);
  enqueue(&q, 30);
  display(&q);

  printf("\n");
  dequeue(&q);
  dequeue(&q);
  display(&q);

  printf("\n");

  return 0;
}