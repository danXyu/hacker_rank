#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int T; cin >> T;

  while(T--) {
    int N; cin >> N;
    bool sherlock = false;
    vector<int> arr;
    vector<int> sums;

    // Use a variable to store the total sum of all array elements.
    int arrSum = 0;

    for(int i = 0; i < N; i++) {
      int temp; cin >> temp;
      arr.push_back(temp);
      arrSum += temp;
      sums.push_back(arrSum);
    }

    // Error checking for N == 1 and N == 2.
    if(N == 1) {
      cout << "YES" << endl;
      continue;
    } else if(N == 2) {
      cout << "NO" << endl;
      continue;
    }

    for(int i = 1; i < arr.size() - 1; i++) {
      if(sums[i - 1] == (sums[arr.size() - 1] - sums[i]))
        sherlock = true;
      }

      if(sherlock) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    }

    return 0;
  }
  
