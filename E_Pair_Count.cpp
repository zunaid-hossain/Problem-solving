#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, p, k;
    cin >> n >> p >> k;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int xor_ab = arr[i] ^ arr[j];
            int xor_a2b = (arr[i] * arr[i]) ^ (arr[j] * arr[j]);
            int result = (xor_ab * xor_a2b) % p;

            if (result == k) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}
