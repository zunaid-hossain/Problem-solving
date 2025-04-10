#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    long long int n,k,x;
    cin>>n>>k>>x;
    vector<int>arr(n);
    for(auto &i:arr)
    {
        cin>>i;
    }
    int sum=0;
    int c=0;
    for(int i=k*n;i>=0;i--)
    {
        sum+=arr[i];
        if(sum>=x)
        {
            break;
        }
        else 
        {
            c++;
        }
    }
    cout<<n*k-c<<endl;

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
