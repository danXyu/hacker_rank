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
    int N, K; cin >> N; cin >> K;
    vector<int> A, B;
    bool permutes = true;

    for(int i = 0; i < N; i++) {
      int temp; cin >> temp;
      A.push_back(temp);
    }

    for(int i = 0; i < N; i++) {
      int temp; cin >> temp;
      B.push_back(temp);
    }

    // Reverse sort A and sort B.
    sort(A.begin(), A.end(), greater<int>());
    sort(B.begin(), B.end());

    for(int i = 0; i < N; i++) {
      if(A[i] + B[i] < K) {
        permutes = false;
      }
    }

    if(permutes) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
