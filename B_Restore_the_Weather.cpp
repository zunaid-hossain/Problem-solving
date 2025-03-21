#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;


void work() {
    int n, b;
    cin >> n >> b;

    vector<pair<int, int>> a(n);
    vector<int> ar(n);
    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }

    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    sort(ar.begin(), ar.end());
    sort(a.begin(), a.end());


    for (int i=0;i<n;i++){  
        ans[a[i].second]=ar[i];  
    }

    for (auto i : ans) {
        cout << i << " ";
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
