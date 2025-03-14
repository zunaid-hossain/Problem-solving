#include <bits/stdc++.h>
using namespace std;

long long MOD = 998244353;

// Fast exponentiation for large powers under modulo
int mod_exp(int base, int exp, long long mod) {
    long long  result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (1LL * result * base) % mod;
        }
        base = (1LL * base * base) % mod;
        exp /= 2;
    }
    return result;
}

// Solution function to calculate the number of ways to color an m x n grid
long long calculateWays(int m, int n, int k) {
    if (k == 1) {
        return (m * n == 1) ? 1 : 0; // Only one way to color if single cell, else impossible
        
    }
    long long ways = mod_exp(k, m * n, MOD); // Placeholder for actual DP + Matrix exponentiation solution
    return ways;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        int m, n, k;
        cin >> m >> n >> k;
        cout << calculateWays(m, n, k) << "\n";
    }
    return 0;
}
