#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n, k;
    cin >> n >> k;
    multiset<int> s;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }

    for (int i = 0; i < k; i++) {
        int x;
        cin >> x;

        if (x == 0) {
            int c;
            cin >> c;
            s.insert(c);
        }
        else if (x == 1) {
            
                cout << *s.begin() << endl;
                s.erase(s.begin());
            
        }
        else if (x == 2) {
                auto it = s.end();
                --it;
                cout << *it << endl;
                s.erase(it);
        }
    }
}


int main() {
    optimize();
    
    work();
    
    return 0;
}
