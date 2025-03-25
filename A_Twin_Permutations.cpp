#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin>>n;

    vector<int>arr(n);
    vector<int>a(n);
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for (int i=0;i<n;i++)
    {
        a[i]=n+1-arr[i];
    }

    for (auto i:a)
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
