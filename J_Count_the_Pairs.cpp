#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;


int main() {
    optimize(); 
    int n,m;
    cin >> n>>m; 
    
    set<int>s;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.insert(x);

    }
    int ans=0;
    for(auto i:s)
    {
        auto it=s.find(i+m);
        if(it!=s.end())
        {
            ans++;
        }

    }
    cout<<ans<<endl;
}
