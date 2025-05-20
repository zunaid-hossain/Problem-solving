#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n,k;
    cin>>n>>k;

    vector<int>arr(n);
    for(auto &i:arr)
    {
        cin>>i;
    }
    if (is_sorted(arr.begin(), arr.end())||k>1)
    {
        cout<<"YES"<<endl;
        return;
    }
    else 
    
    {
        cout<<"NO"<<endl;
        return ;

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
