#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

bool solve(vector<int>& A);
int gcd(int a, int b);

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int T; cin >> T;

  for(int i = 0; i < T; i++) {
    vector<int> A;
    int N; cin >> N;

    for(int j = 0; j < N; j++) {
      int intToAdd; cin >> intToAdd;
      A.push_back(intToAdd);
    }

    cout << (solve(A) ? "YES" : "NO") << endl;
  }

  return 0;
}

bool solve(vector<int>& A) {
  int startingVal;

  for(int i = 0; i < A.size(); i++) {
    startingVal = A.back();
    A.pop_back();

    for(vector<int>::iterator it = A.begin(); it != A.end(); it++) {
      if(gcd(startingVal, *it) == 1)
        return true;
      }
    }

    if(startingVal == 1) {
      return true;
    } else {
      return false;
    }
  }

  int gcd(int a, int b) {
    if(b == 0)
      return a;
      return gcd(b, a % b);
    }
    
