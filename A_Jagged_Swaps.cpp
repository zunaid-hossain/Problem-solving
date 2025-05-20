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
    int x=arr[0];
    for(int i=1;i<n;i++)
    {
        if(x>arr[i])
        {
            cout<<"NO"<<endl;
            return ;
        }

    }
    cout<<"YES"<<endl;

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
