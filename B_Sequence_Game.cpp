#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin>>n;
    vector<int>arr(n);
    vector<int>a;
    for(auto &i: arr)
    {
        cin>>i;
    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            a.push_back(arr[i]);
            a.push_back(1);
            
        }
        else
        {
            a.push_back(arr[i]);
        }

    }
    a.push_back(arr[n-1]);
    cout<<a.size()<<endl;

    for(auto i:a)
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
