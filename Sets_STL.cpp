#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

set<int> s; 

void work() {
    int a, b;
    cin >> a >> b;
    if (a == 1)
        s.insert(b);
    else if (a == 2)
        s.erase(b);
    else if (a == 3) {
        auto it = s.find(b);
        if (it != s.end())
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
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
