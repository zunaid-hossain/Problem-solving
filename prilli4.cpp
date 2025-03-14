#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

// Function to compute modular inverse of a number a under modulo MOD using Fermat's Little Theorem
int mod_inverse(int a, int mod) {
    return pow(a, mod - 2, mod);
}

int main() {
    int N;
    cin >> N;
    vector<int> red(N), green(N);
    
    // Read input for red and green apple weights
    for (int i = 0; i < N; i++) {
        cin >> red[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> green[i];
    }
    
    // Step 1: Compute the expected weight for each box
    vector<double> expected(N);
    for (int i = 0; i < N; i++) {
        expected[i] = (red[i] + green[i]) / 2.0;
    }
    
    // Step 2: Sort the expected weights in descending order
    sort(expected.rbegin(), expected.rend());
    
    // Step 3: Compute prefix sums of the sorted expected values
    vector<double> prefix_sum(N + 1, 0.0);
    for (int i = 1; i <= N; i++) {
        prefix_sum[i] = prefix_sum[i - 1] + expected[i - 1];
    }
    
    // Step 4: For each K from 1 to N, compute the expected sum modulo MOD
    for (int K = 1; K <= N; K++) {
        long long total_weight = (long long)(prefix_sum[K] * 1000000000) % MOD;
        cout << total_weight << " ";
    }

    return 0;
}
