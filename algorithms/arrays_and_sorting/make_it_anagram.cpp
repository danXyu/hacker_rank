#include <map>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  string A; cin >> A; sort(A.begin(), A.end());
  string B; cin >> B; sort(B.begin(), B.end());
  map<char, int> mapA;
  int numDeletions = 0;

  for(int i = 0; i < A.length(); i++) {
    if(mapA[A[i]]) {
      mapA[A[i]] += 1;
    } else {
      mapA[A[i]] = 1;
    }
  }

  for(int i = 0; i < B.length(); i++) {
    if(mapA[B[i]]) {
      mapA[B[i]] -= 1;
      if(mapA[B[i]] < 0) {
        numDeletions += 1;
      }
    } else {
      numDeletions += 1;
    }
  }

  for(auto iter = mapA.begin(); iter != mapA.end(); iter++) {
    numDeletions += abs(iter->second);
  }


  cout << numDeletions << endl;

  return 0;
}
