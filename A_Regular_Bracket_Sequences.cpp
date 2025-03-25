#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<"(";
        }
        for(int j=0;j<n-i;j++)
        {
            cout<<")";
        }
        for(int j=n-i;j<n;j++)
        {
            cout<<"(";
        }
        for(int j=n-i;j<n;j++)
        {
            cout<<")";
        }

        cout<<endl;  

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
