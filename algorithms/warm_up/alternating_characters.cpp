#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T; cin >> T;

    for(int i = 0; i < T; i++) {
        string test; cin >> test;
        char prev = test[0];
        int numChanges;

        for(int j = 1; j < test.length(); j++) {
            if(test[j] == prev)
                numChanges++;
            prev = test[j];
        }
        cout << numChanges << endl;
        numChanges = 0;
    }

    return 0;
}
