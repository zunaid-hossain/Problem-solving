#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n,k;
    cin>>n>>k;
    
    vector<int>arr;
    arr.push_back(0);
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);

    }

    int x=(k-arr[n])*2;

    for(int i=0;i<n;i++)
    {
        x=max(arr[i+1]-arr[i],x);
    }

    cout<<x<<endl;
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
