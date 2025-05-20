#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c=0;
    int ans=0;
    for(int i=0;i<n;i++)
    {

        if(s[i]=='.')c++;

        else if(s[i]=='#')
        {
            ans+=c;
            c=0;
        }
        if(c>2)
        {
            cout<<2<<endl;
            return;
        }
    
    }
    ans+=c;
    cout<<ans<<endl;  

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
