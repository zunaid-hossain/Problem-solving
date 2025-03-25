#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin>>n;
    vector<int>arr;
    
    for(int i=2;i<=n;i++)
    {
        arr.push_back(i);
    }
    arr.push_back(1);

    for(auto i:arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
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
