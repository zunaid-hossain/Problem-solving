#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;



int main() {
    optimize(); 
    int t;
    cin >> t;  
    for(int i=1;i<=t;i++)
    {
        int n,k;
        cin>>n>>k;

        long long  sum =0;

        for(int j=0;j<n;j++)
        {
            int x,y;
            cin>>x>>y;

            sum+=k/x;
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
    }
    return 0;
}
