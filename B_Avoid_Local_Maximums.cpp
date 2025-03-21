#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i =0;i<n;i++)
    {
        cin>>arr[i];

    }
    // arr[n]=0;
    int ans=0;
    for(int i=1;i<n-1;i++)
    {
        if(arr[i-1]<arr[i]&&arr[i]>arr[i+1])
        {
            ans++;
            if(i+2<n)
                arr[i+1]=max(arr[i+2],arr[i]);
            else 
            {
                arr[i+1]=arr[i];
            }
        }
    }
    cout<<ans<<endl;
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
