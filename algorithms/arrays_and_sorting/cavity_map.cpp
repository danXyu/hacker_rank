#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int n; cin >> n;
  vector<string> cavities;

  for(int i = 0; i < n; i++) {
    string temp; cin >> temp;
    cavities.push_back(temp);
  }

  vector<int> xVals, yVals;
  for(int i = 1; i < n - 1; i++) {
    for(int j = 1; j < n - 1; j++) {
      if(cavities[i][j] > cavities[i - 1][j] &&
        cavities[i][j] > cavities[i + 1][j] &&
        cavities[i][j] > cavities[i][j - 1] &&
        cavities[i][j] > cavities[i][j + 1])
        {
          xVals.push_back(i); yVals.push_back(j);
        }
      }
    }

    int size = xVals.size();
    for(int i = 0; i < size; i++) {
      cavities[xVals[i]].replace(yVals[i], 1, "X");
    }

    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        cout << cavities[i][j];
        if(j == n - 1)
          cout << "\n";
        }
      }
      return 0;
    }
    
