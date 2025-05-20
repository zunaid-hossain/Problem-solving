#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin>>n;
    string s;
    cin>>s;

    deque<int> ar;
    for (int i = 1; i <= n; i++) ar.push_back(i);

    vector<int>arr(n);

    for(int i=n-1;i>=0;i--)
    {
        if(s[i-1]=='<')
        {
            arr[i]=ar.front();
            ar.pop_front();
        }
        else
        {
            arr[i]=ar.back();
            ar.pop_back();
        }
    }
    arr[0]=ar[0];

    for(auto i:arr)
    {
        cout<<i<<" ";
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
