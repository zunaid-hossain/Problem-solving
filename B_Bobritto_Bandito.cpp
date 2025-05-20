#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n,m,l,r;
    cin>>n>>m>>l>>r;

    for(int i=0;i<n-m;i++)
    {
        if(l<0)l++;
        else r--;
    }
    cout<<l<<" "<<r<<endl;
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
