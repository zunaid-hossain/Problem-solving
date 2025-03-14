#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int a,n;
    cin>>a>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.rbegin(), arr.rend());
    int x=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]==1)
        {
            x++;
        }
        else if(arr[i]>=2)
        {
            x+=(arr[i]*2-1);
        }
        

    }cout<<x<<endl;
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
