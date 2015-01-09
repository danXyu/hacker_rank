#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


// It is NOT mandatory to use the provided template. You can handle the IO section differently.

int main() {
    /* The code required to enter n,k, candies is provided*/

    int N, K, unfairness, real_unfairness;
    cin >> N >> K;
    int candies[N];
    for (int i=0; i<N; i++)
        cin >> candies[i];

    /** Write the solution code here. Compute the result, store in  the variable unfairness --
    and output it**/

    // Start with a distance of K apart.
    int curr_min = 0;
    int curr_max = K-1;
    unfairness = numeric_limits<float>::max();

    // Selection sort the array. This failed.

    // Quicker sort method.
    sort(candies, candies + N);

    // K represents curr_max, which must iterate to end, which is N.
    while(curr_max < N){
        real_unfairness = abs(candies[curr_max] - candies[curr_min]);
        if(real_unfairness < unfairness)
            unfairness = real_unfairness;
        curr_min++;
        curr_max++;
    }

    cout << unfairness << "\n";
    return 0;
}

void swap(int* a, int* b){
    int* temp = a;
    a = b;
    b = temp;
}
