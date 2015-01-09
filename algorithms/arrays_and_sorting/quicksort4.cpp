#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Global variable to keep track of quickSort swaps.
int numQuickSortSwaps = 0;

int insertionSortShifts(vector<int> arr);
void quickSort(vector<int>& arr, int i, int k);
int partition(vector<int>& arr, int left, int right);
void swap(int& a, int& b);

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  vector<int> arr;
  int arr_size;
  cin >> arr_size;
  for(int arr_i = 0; arr_i < arr_size; arr_i++) {
    int arr_temp;
    cin >> arr_temp;
    arr.push_back(arr_temp);
  }

  int numInsertionSortShifts = insertionSortShifts(arr);
  quickSort(arr, 0, arr.size() - 1);

  cout << (numInsertionSortShifts - numQuickSortSwaps) << endl;

  return 0;
}

void quickSort(vector<int>& arr, int i, int k) {
  if(i < k) {
    int p = partition(arr, i, k);
    quickSort(arr, i, p - 1);
    quickSort(arr, p + 1, k);
  }
}

int partition(vector<int>& arr, int left, int right) {
  int pivot = arr[right];
  int storeIndex = left;
  for(int i = left; i < right; i++) {
    if(arr[i] < pivot) {
      numQuickSortSwaps += 1;
      swap(arr[i], arr[storeIndex]);
      storeIndex += 1;
    }
  }
  numQuickSortSwaps += 1;
  swap(arr[storeIndex], arr[right]);
  return storeIndex;
}

int insertionSortShifts(vector<int> arr) {
  int numShifts = 0;
  for(int i = 1; i < arr.size(); i++) {
    int j = i;
    while(j > 0 && arr[j - 1] > arr[j]) {
      swap(arr[j - 1], arr[j]);
      numShifts += 1;
      j -= 1;
    }
  }
  return numShifts;
}

void swap(int& a, int& b) {
  int temp = a;
  a = b;
  b = temp;
}
