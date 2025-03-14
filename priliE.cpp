#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    optimize(); 
    long long t;
    cin >> t;  
    for (int i = 1; i <= t; i++) {
        long long n, k;
        cin >> n >> k;

        string winner;
        // If n is odd, Oddius wins if he starts (k == 1), else Evenius wins.
        if (n % 2 == 1) {
            if (k == 1) {
                winner = "Oddius";
            } else {
                winner = "Evenius";
            }
        } 
        // If n is even, Evenius wins if he starts (k == 2), else Oddius wins.
        else {
            if (k == 1) {
                winner = "Oddius";
            } else {
                winner = "Evenius";
            }
        }

        cout << "Case " << i << ": " << winner << endl;
    }
    return 0;
}
