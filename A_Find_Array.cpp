#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin>>n;
    vector<int>ar;
    ar.push_back(2);
    for(int i=1,j=3;i<n;i++)
    {
        if(j%ar[i-1]==0)
        {
            j++;
            i--;
        }
        else
        {
            ar.push_back(j);
        }
    }
    for(auto i:ar)
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
