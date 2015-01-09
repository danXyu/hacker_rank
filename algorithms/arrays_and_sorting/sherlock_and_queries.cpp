#include <cmath>
#include <cstdio>
#include <map>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int MOD = 1000000007;
  int N, M; cin >> N >> M;
  vector<long long> A, B, C;

  for(int i = 0; i < N; i++) {
    long long temp; cin >> temp;
    A.push_back(temp);
  }

  for(int i = 0; i < 2; i++) {
    for(int j = 0; j < M; j++) {
      long long temp; cin >> temp;
      if(i == 0) {
        B.push_back(temp);
      } else {
        C.push_back(temp);
      }
    }
  }

  map<int, int> helper;

  for(int i = 0; i < M; i++) {
    int key = B[i];
    int j = helper[key];
    helper[key] = (!j) ? C[i] : int((long(j) * C[i]) % MOD);
  }

  for(map<int, int>::iterator iter = helper.begin(); iter != helper.end(); iter++) {
    int divisor = iter->first;
    int multiplier = iter->second;
    for(int j = divisor - 1; j < N; j += divisor) {
      A[j] = int((A[j] * multiplier) % MOD);
    }
  }

  for(int i = 0; i < A.size(); i++) {
    cout << A[i] << " ";
  }

  return 0;
}
