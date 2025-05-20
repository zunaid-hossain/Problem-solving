#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;
 
long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
 
void work() {
    int n;
    cin >> n;
 
    vector<int> arr(n);
    for (auto &i : arr) {
        cin >> i;
    }
 
    int x = -1;  
    for (int i = 0; i < n-1; i++) {
        int res1 = arr[0], res2 = arr[i + 1]; 
        for (int j = 1; j <= i; j++) {
            res1 = gcd(res1, arr[j]);
        }
 
        for (int k = i + 1; k < n; k++) {
            res2 = gcd(res2, arr[k]);
        }
      if (res1 != res2) {
            x = i;
            break;
        }
    }
 
    if (x == -1) {
        cout << "NO" << endl;
        return;
    }
 
    cout << "YES" << endl;
  
    for (int i = 0; i < n; i++) {
        if (i <= x) cout << 1 << " ";
        else cout << 2 << " ";
    }
    cout << endl;
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