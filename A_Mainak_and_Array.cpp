#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin>>n;
    vector<int>arr(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(n==1)
    {
        cout<<0<<endl;
        return;
    }
    int ans=arr[n-1]-arr[0];

    for(int i=1;i<n;i++)
    {
        ans=max(ans,arr[i]-arr[0]);
    }
    for(int i=0;i<n-1;i++)
    {
        ans=max(ans,arr[n-1]-arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        ans=max(ans,arr[i]-arr[i+1]);
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
   
}
