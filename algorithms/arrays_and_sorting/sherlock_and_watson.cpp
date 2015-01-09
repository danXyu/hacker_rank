#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int N, K, Q; cin >> N >> K >> Q;
  queue<int> arr; stack<int> helper_arr;

  for(int i = 0; i < N; i++) {
    int temp; cin >> temp;
    helper_arr.push(temp);
  }

  while(helper_arr.size() > 0) {
    int top = helper_arr.top();
    helper_arr.pop(); arr.push(top);
  }

  if(arr.size() > 0) {
    for(int i = 0; i < K; i++) {
      int front = arr.front();
      arr.pop(); arr.push(front);
    }
  }

  while(Q--) {
    queue<int> dummy; dummy = arr;
    int query; cin >> query;
    int realQ = dummy.size() - query - 1;

    while(realQ--) {
      dummy.pop();
    }

    cout << dummy.front() << endl;
  }

  return 0;
}
