#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  vector<int> arr;
  int arr_size;
  cin >> arr_size;

  // Initialize all values in arr to 0.
  for(int arr_i = 0; arr_i < 100; arr_i++) {
    arr.push_back(0);
  }

  // Count the elements in arr.
  for(int arr_i = 0; arr_i < arr_size; arr_i++) {
    int arr_temp;
    cin >> arr_temp;
    arr[arr_temp] += 1;
  }

  // Print all the elements in arr.
  for(int arr_i = 0; arr_i < arr.size(); arr_i++) {
    for(int j = 0; j < arr[arr_i]; j++) {
      cout << arr_i << " ";
    }
  }

  return 0;
}
