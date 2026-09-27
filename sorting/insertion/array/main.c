#include <stdio.h>

void displayArray(int *arr, int count) {

  printf("Elements of the array are: \n");
  for (int i = 0; i < count; i++) {
    printf("%d ", arr[i]);
  }

  printf("\n\n");
}

void insertionSort(int *arr, int count) {
  int key;

  for (int i = 1; i < count; i++) {
    key = arr[i];

    for (int j = i - 1; j >= 0; j--) {
      if (arr[j] > key) {
        arr[j + 1] = arr[j];
        arr[j] = key;
      } else {
        break;
      }
    }
  }
}

int main() {

  int arr[50] = {7, 2, 20, 34, 1, 6, 11, 9}, count = 8;

  displayArray(arr, count);
  insertionSort(arr, count);
  displayArray(arr, count);

  printf("\n");
  return 0;
}