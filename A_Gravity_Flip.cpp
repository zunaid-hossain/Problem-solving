#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin>>n;

    multiset<int>ar;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        ar.insert(a);
    }
    for(auto i:ar)

    {
        cout<<i<<" ";

    }
    cout<<endl;
}

int main() {
    optimize(); 
    
    work(); 
    
    return 0;
}
