#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    long long a,b;
    cin>>a>>b;
    vector<long long>c;
    for(long long i=0;i<a;i++)
    {
        long long e;
        cin>>e;
        c.push_back(e);

    }
    cin>>b;

    if(c.size()==1)cout<<"YES"<<endl;
    else 
    {
        for(long long i=1;i<a;i++)
        {
            if(c[i-1]>c[i]&&b-c[i-1]<c[i])
            {
                c[i-1]=b-c[i-1];
    
            }
            
        }
        if (is_sorted(c.begin(), c.end()))cout<<"YES"<<endl;
        else cout <<"NO"<<endl;
    }
    for(long long i=0;i<a;i++)
        {
            cout<<c[i]<<" ";
            
        }  
    
        
}

int  main() {
    optimize(); 
    long long t;
    cin >> t;  
    while (t--) {
        work(); 
    }
    return 0;
}
