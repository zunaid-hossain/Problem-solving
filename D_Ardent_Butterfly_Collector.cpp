#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin>>n;
    set <int> s;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        s.insert(a);
    }
    int b;
    cin>>b;
    for(int i=0;i<b;i++)
    {
        int x;
        cin>>x;
        auto it=s.find(x);
        if(it!=s.end())cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


}

int main() {
    optimize(); 
    
    work(); 
    
    return 0;
}
