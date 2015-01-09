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
    int M, N; cin >> M >> N;
    vector<int> arr;

    for(int i = 0; i < N; i++) {
      int temp; cin >> temp;
      arr.push_back(temp);
    }

    for(int i = 0; i < N; i++) {
      for(int j = i; j < N; j++) {
        if(i != j && arr[i] + arr[j] == M) {
          cout << (i + 1) << " " << (j + 1) << endl;
          break; break;
        }
      }
    }
  }

  return 0;
}
