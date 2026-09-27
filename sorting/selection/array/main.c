#include <stdio.h>

void displayArray(int *arr, int count) {

  printf("Elements of the array are: \n");
  for (int i = 0; i < count; i++) {
    printf("%d ", arr[i]);
  }

  printf("\n\n");
}

void selectionSort(int *arr, int count) {
  int minIndex, temp;

  for (int i = 0; i < count; i++) {
    minIndex = i;

    for (int j = i + 1; j < count; j++) {
      if (arr[j] < arr[minIndex]) {
        minIndex = j;
      }
    }

    if (minIndex != i) {
      temp = arr[minIndex];
      arr[minIndex] = arr[i];
      arr[i] = temp;
    }
  }
}

int main() {

  int arr[50] = {7, 2, 20, 34, 1, 6, 11, 9}, count = 8;

  displayArray(arr, count);
  selectionSort(arr, count);
  displayArray(arr, count);

  printf("\n");
  return 0;
}