#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x=0;
    for(auto i:s)
    {
        if(i=='1')x++;
    }
    x*=n;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')x--;
        else x++;

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
