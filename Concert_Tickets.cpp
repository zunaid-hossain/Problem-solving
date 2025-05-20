#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;
void work() {
    int a, b;
    cin >> a >> b;

    multiset<int> ar;
    vector<int> arr(b);

    for (int i = 0; i < a; i++) {
        int x;
        cin >> x;
        ar.insert(x);
    }

    for (int i = 0; i < b; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < b; i++) {
        auto it = ar.upper_bound(arr[i]); 

        if (it == ar.begin()) {
            cout << -1 << endl;
        } else {
            --it;
            cout << *it << endl;
            ar.erase(it);
        }
    }
}


int main() {
    optimize(); 
    
    work(); 
    
    return 0;
}
