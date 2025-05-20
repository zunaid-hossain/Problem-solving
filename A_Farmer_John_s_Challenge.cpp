#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n,m;
    cin>>n>>m;
    if(m==1)
    {
        for(int i=0;i<n;i++)
        {
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
    else if(m==n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<1<<" ";
        }
        cout<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
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
