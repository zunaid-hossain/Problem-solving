#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin>>n;
    vector<long long >arr(n);
    for(auto &i:arr)
    {
        cin>>i;
    }
    sort(arr.begin(),arr.end());

    long long int x=arr[0];

    
    long long  g=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]%x==0)
        {
            g=__gcd(g,arr[i]);
        }

    }
    if(g==x)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

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
