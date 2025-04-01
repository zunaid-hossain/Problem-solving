#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin>>n;
    vector<pair<int,int>>arr;
    int p=0;
    for(int i=1,j=3*n;j>i;)
    {
        
        arr.push_back({i,j});
        i+=3;
        j-=3;
        p++;
    }
    cout<<p<<endl;
    for(auto i:arr)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
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
