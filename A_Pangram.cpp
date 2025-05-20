#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<char>ar;
    for(int i=0;i<n;i++)
    {
        if(s[i]<=90)s[i]+=32;
        ar.insert(s[i]);
    }
    if(ar.size()>=26)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}

int main() {
    optimize(); 
    
    work(); 
    
    return 0;
}
