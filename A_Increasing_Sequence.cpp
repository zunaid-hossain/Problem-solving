#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin>>n;
    vector<int>a(n+1),b(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int bp=1;
    for(int i=1;i<=n;i++)
    {
        if(bp==a[i])bp++;
        
        
        bp++;
    }

    cout<<bp-1<<endl;
    
    
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
