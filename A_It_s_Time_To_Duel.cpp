#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;
void work() {
    int n;
    cin>>n;
    vector<int>arr(n);

    for(int &i:arr)
    {
        cin>>i;
    }
    int x=0,y=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==0&&arr[i+1]==0)
        {
            cout<<"YES"<<endl;
            return;

        }
        if(arr[i]==1)x++;
        if(arr[i]==0)y++;
    }
    if(arr[n-1]==0)y++;
    else x++;

    // cout<<x<<" "<<y;

    if(x==n||y==n)cout<<"YES"<<endl;
    else  cout<<"NO"<<endl;
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
