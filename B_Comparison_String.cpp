#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>arr;

    int a=0,b=0;
    for(int i=0;i<n-1;i++)
    {
       if( s[i]==s[i+1])
       {
        a++;
        b=max(a,b);
       }
       else{
        a=0;
       }       
    }
    cout<<b+2<<endl;
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
