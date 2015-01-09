#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int n; cin >> n;
  vector<int> arr;

  while(n--) {
    int temp; cin >> temp;
    arr.push_back(temp);
  }

  sort(arr.begin(), arr.end());

  int prev = arr[0]; int min = 999999;
  for(int i = 1; i < arr.size(); i++) {
    int curr = arr[i];

    if((curr - prev) < min)
      min = curr - prev;

      prev = curr;
    }

    prev = arr[0];
    for(int i = 1; i < arr.size(); i++) {
      int curr = arr[i];
      if((curr - prev) == min) {
        cout << prev << " " << curr << " ";
      }
      prev = curr;
    }
    return 0;
  }
  
