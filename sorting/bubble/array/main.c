
#include <stdio.h>

void bubbleSort(int *arr, int count) {
  int temp, swapped = 0;

  for (int i = 0; i < count - 2; i++) {
    swapped = 0;

    for (int j = 0; j < count - 2 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        swapped = 1;
      }
    }

    if (!swapped)
      break;
  }
}

int main() {

  int arr[50] = {5, 8, 12, 1, 4, 9, 20, 13}, count = 8;

  printf("Array before sorting is: \n");
  for (int i = 0; i < count - 1; i++) {
    printf("%d ", arr[i]);
  }

  bubbleSort(arr, count);

  printf("\n\nArray After sorting is: \n");
  for (int i = 0; i < count - 1; i++) {
    printf("%d ", arr[i]);
  }

  printf("\n");

  return 0;
}