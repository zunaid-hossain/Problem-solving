#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n,a,b;
    cin>>n>>a>>b;

    vector<int>arr;

    for(int i=n;i>0;i--)
    {
        if(i!=a&&i!=b)
        {
            arr.push_back(i);
        }

    }
    arr.insert (arr.begin(),a);
    arr.push_back(b);

    int f=1;
    for(int i=0;i<n/2;i++)
    {
        if(arr[0]>arr[i])f=0;
    }

    
    for(int i=n/2;i<n;i++)
    {
        if(arr[n-1]<arr[i])f=0;
    }
    
    if(f==0)
    {
        cout<<-1<<endl;
        return ;
    }
    for(int i=0;i<n/2;i++)
    {
    }

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
