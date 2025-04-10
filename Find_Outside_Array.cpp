#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;

    sort(arr.begin(), arr.end());

    if (n == 1) {
        cout << arr[n - 1] << " " << arr[n - 1] << endl;
        return;
    }

    if (find(arr.begin(), arr.end(), (arr[n - 1] + arr[n - 2])) != arr.end()) {
        cout << -1 << " " << (arr[n - 1] + arr[n - 2]) << endl;
    } else {
        cout << arr[n - 2] << " " << arr[n - 1] << endl;
    }
}

int main() {
    optimize();
    int t;
    cin >> t;
    while (t--) {
        work();
    }
    return 0;
}
