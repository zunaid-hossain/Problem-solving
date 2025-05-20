#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin>>n;
    set<int>s;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        s.insert(a);
    }
    cout<<s.size()<<endl;
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
