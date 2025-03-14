#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int a,b;
    cin>>a>>b;
    vector<int>arr(a);
    for(int i=0;i<a;i++)
    {
        cin >>arr[i];
    }
    for(int i=0;i<a-1;i++)
    {
        if(arr[i]<b)
        {
            b-=arr[i];
            arr[a-1]+=arr[i];
            arr[i]=0;
        }
        else 
        {
            arr[i]-=b;
            arr[a-1]+=b;
            b=0;
    
        }
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
