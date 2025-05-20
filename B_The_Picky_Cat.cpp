#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin>>n;
    vector<int>arr(n);

    for(auto &i:arr)
    {
        cin>>i;
    }
    if(n<3)
    {
        cout<<"YES"<<endl;
        return;

    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)arr[i]*=-1;
    }

    int target=arr[0];

    sort(arr.begin(),arr.end());
    int f=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            f=i;
            break;
        } 
    }

    // cout<<n-f-1<<" "<<f<<endl;

    if((n-f-1)>=f)
    {
        cout<<"YES"<<endl;
        return ;
    }
    if(n%2==0)
    {
        if((n-f-1)==n/2-1)
        {
            cout<<"YES"<<endl;
            return ;
        }
    }
    cout<<"NO"<<endl;

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
