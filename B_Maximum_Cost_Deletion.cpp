#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    int o=0,z=0;
    int ans=n*a;

    for(auto i:s)
    {
        if(i=='0')z++;
        if(i=='1')o++;
        
    }

    if(b>=0)
    {
        ans+=b*n;
    }

    else 
    {
        int m = unique(s.begin(), s.end()) - s.begin();
        ans+=b*(m/2+1);


    }
    cout<<ans<<endl;
   
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
