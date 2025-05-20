#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

bool allSame(string s) {
    return set<char>(s.begin(), s.end()).size() == 1;
}

void work() {
    int n,k;
    cin>>n>>k;
    string s;
    int x =0;
    cin>>s;
    string t=s;
    reverse(s.begin(),s.end());
    
    if(t<s)cout<<"YES"<<endl;
    else if(allSame(s))
    {
        cout<<"NO"<<endl;
    }
    else if(k>0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

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
