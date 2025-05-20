#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    long long sum = 0, odd_count = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
        odd_count += (a[i] % 2);
    }

    if (odd_count == 0 || odd_count == n) {
        cout << *max_element(a.begin(), a.end()) << '\n';
    } else {
        cout << sum - odd_count + 1 << '\n';
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

