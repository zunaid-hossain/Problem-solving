#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin>>n;
    vector<int>arr(n);
    if(n%2!=0)
    {
        arr.assign(n,1);
    }
    if(n%2==0)
    {
        arr[0]=1;
        arr[1]=3;
        fill(arr.begin()+2, arr.end(), 2);
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
