#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,t;
    cin>>n>>t;
    vector<long long>arr(n);
    vector<long long>a(n);

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr.rbegin(),arr.rend());

    a[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        a[i]=arr[i]+a[i-1];
        
    }
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x==y)
        {
         cout<<a[x-1]<<endl;   
        }
        else
        {
            cout<<a[x-1]-a[x-y-1]<<endl;
        }
    }
    return 0;
}
