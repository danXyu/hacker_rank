#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int n; cin >> n;
  vector<int> A;

  for(int i = 0; i < n; i++) {
    int temp; cin >> temp;
    A.push_back(temp);
  }

  int m; cin >> m;
  vector<int> B;

  for(int i = 0; i < m; i++) {
    int temp; cin >> temp;
    B.push_back(temp);
  }

  sort(A.begin(), A.end());
  sort(B.begin(), B.end());

  map<int, int> answer;

  // Ensure that B is the larger vector.
  if(B.size() < A.size()) {
    vector<int> temp = A;
    A = B;
    B = temp;
  }

  for(int i = 0; i < B.size(); i++) {
    if(answer.find(B[i]) == answer.end())
      answer[B[i]] = 0;
      answer[B[i]] += 1;
    }

    for(int j = 0; j < A.size(); j++) {
      answer[A[j]] -= 1;
    }

    for(map<int, int>::iterator iter = answer.begin(); iter != answer.end(); iter++) {
      if(iter->second > 0)
        cout << iter->first << " ";
      }

      return 0;
    }
    
