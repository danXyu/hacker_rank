#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Global variable for array size.
int arr_size;

// Function prototypes.
void quicksort(int* arr, int low, int high);
int partition(int* arr, int low, int high);
void printArray(int* arr);

int main() {
  int n; scanf("%d", &n); arr_size = n;
  int arr[n]; for(int i = 0; i < n; i++) {scanf("%d", &arr[i]);}

  quicksort(arr, 0, n - 1);
  return 0;
}

void quicksort(int* arr, int low, int high) {
  if(low < high) {
    int p = partition(arr, low, high);
    quicksort(arr, low, p - 1);
    quicksort(arr, p + 1, high);
  }
}

int partition(int* arr, int low, int high) {
  // Use left and right variables to track pivot position.
  int left, right; right = left = low;
  int pivot_val = arr[high]; int pivot = high;

  // Set left to be the first value larger than pivot, and right the value after smaller.
  while(1) {
    while(left < high && arr[left] <= pivot_val) {left++;} right = left;
      while(right < high && arr[right] >= pivot_val) {right++;}

        if(left == high || right == high) break;

        if(left <= high && right <= high) {
          int temp  = arr[left];
          arr[left] = arr[right];
          arr[right] = temp;
        }
      }

      int temp = arr[pivot];
      arr[pivot] = arr[left];
      arr[left] = temp;

      printArray(arr);
      return left;
    }

    void printArray(int* arr) {
      for(int i = 0; i < arr_size; i++) {
        printf("%d ", arr[i]);
      }
      printf("\n");
    }

    
