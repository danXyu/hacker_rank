#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  vector<int> count_arr;
  vector<queue<string> > str_arr;
  int arr_size; cin >> arr_size;

  // Initialize all values in arr to 0.
  for(int arr_i = 0; arr_i < 100; arr_i++) {
    count_arr.push_back(0);
    queue<string> str_queue; str_arr.push_back(str_queue);
  }

  // Count the elements in arr.
  for(int arr_i = 0; arr_i < arr_size; arr_i++) {
    int arr_temp; cin >> arr_temp;
    string str_temp; cin >> str_temp;

    count_arr[arr_temp] += 1;
    if(arr_i < (arr_size / 2)) {
      str_arr[arr_temp].push("-");
    } else {
      str_arr[arr_temp].push(str_temp);
    }
  }

  // Print all the elements in arr.
  for(int i = 0; i < count_arr.size(); i++) {
    if(count_arr[i] > 0) {
      while(str_arr[i].size() > 0) {
        cout << str_arr[i].front() << " ";
        str_arr[i].pop();
      }
    }
  }

  return 0;
}
