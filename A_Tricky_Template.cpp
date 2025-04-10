#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
        int n;
        cin >> n;
        string a, b, c;
        cin >> a >> b >> c;
    
        bool found = false;
        for (int i = 0; i < n; ++i) {
            if (a[i] != c[i] && b[i] != c[i]) {
                found = true;
                break;
            }
        }
    
        cout << (found ? "YES" : "NO") << endl;
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
