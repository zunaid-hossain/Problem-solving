#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin>>n;
    vector<int>arr(n);
    string s(n, 'R');

    for(auto &i:arr)
    {
        cin>>i;   
    }

    int m= unique(arr.begin(),arr.end())-arr.begin();

    if(m==1)
    {
        cout<<"NO"<<endl;
        return;

    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            s[i+1]='B';
            i=n;
        }
    }

    cout<<"YES"<<endl;

    for(auto i :s)
    {
        cout<<i;
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
