#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
  long long n, k; cin >> n >> k;
  vector<long long> prices;

  for(int i = 0; i < n; i++) {
    long long p; cin >> p;
    prices.push_back(p);
  }

  sort(prices.begin(), prices.end());
  int answer = 0;

  // Write the code for computing the final answer using n,k,prices
  for(int i = 0; i < prices.size(); i++) {
    if(k - prices[i] >= 0) {
      answer += 1;
      k -= prices[i];
    }
  }

  cout << answer << endl;

  return 0;
}
