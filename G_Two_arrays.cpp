#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n, m;
    cin >> n;
    vector<int> a(n),d;
    for (auto &i : a) {
        cin >> i;
    }

    cin >> m;
    set<int> b;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        b.insert(x);
    }
    int y=0;
    for (auto i : a) {
        auto it = b.find(i);
        if (it != b.end()) {
        
        } else {
            y++;
            d.push_back(i);

        }

    }
    cout<<y<<endl;
    for(auto i:d)
    {
        cout<<i<<" ";
    }cout<<endl;

}

int main() {
    optimize();
    work();
    return 0;
}
