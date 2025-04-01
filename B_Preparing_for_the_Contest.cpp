#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n,k;
    cin>>n>>k;
    vector<int>arr;

    for(int i=n;i>0;i--)
    {
        arr.push_back(i);
    }
    for(int i=0;i<k;i++)
    {
        arr.insert(arr.begin()+i,arr.back());
        arr.pop_back();
    }
    for(auto i:arr)
    {
        cout<<i<<" ";
    }cout<<endl;
    
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
