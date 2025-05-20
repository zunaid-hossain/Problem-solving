#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;
int main() {
    optimize(); 
    int t;
    cin >> t; 
    int r=0;
    set<int>arr;
    for (int i = 0; i < 2*t; ++i) {
        int x;
        cin >> x;
        int c=arr.size();
        arr.insert(x);
        int l=arr.size();
        if(l==c)
        {
            r=max(r,l);
            arr.erase(x);
        }

    }
    cout<<r<<endl;
    
    
}
