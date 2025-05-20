#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin>>n;
    vector<int>ms;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        ms.push_back(x);
    }
    sort(ms.begin(),ms.end());
    int x=0;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            x+=ms[j];
        }
    }
    cout<<x<<endl;
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
