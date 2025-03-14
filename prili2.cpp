#include <bits/stdc++.h>
using namespace std;

// Function to compute gcd
long long gcd(long long a, long long b) {
    return b == 0 ? a : gcd(b, a % b);
}

pair<long long, long long> findMinimumJumpDistanceSquared(long long a, long long b, long long c) {

    long long s = (a + b + c) / 2;
    long long area_squared = s * (s - a) * (s - b) * (s - c);
    long long numerator = area_squared;
    long long denominator = s * s; 

    long long divisor = gcd(numerator, denominator);
    numerator /= divisor;
    denominator /= divisor;

    return {numerator, denominator};
}

int main() {
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        long long a, b, c;
        cin >> a >> b >> c;

        auto result = findMinimumJumpDistanceSquared(a, b, c);
        cout << result.first << "/" << result.second << endl;
    }
    return 0;
}
