#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

bool prime ( long long n){
    if(n < 2) return false;
    for(long long  i = 2; i * i <= n; i++)
        if(n % i == 0) return false;
    return true;
}

void work() {
        long long  x,k;
        cin >> x >> k;
        if (k == 1) {
            cout << (prime (x) ? "YES" : "NO") << endl;
        } else if (x == 1 && k == 2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
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
