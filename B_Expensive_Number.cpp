#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    string s;
    cin>>s;
    
    int x=0,b=0,c=0;
    for(int i=s.size()-1;i>0;i--)
    {
        if(s[i]=='0'&&x==0)
        {
            b++;
        }
        else if(s[i]!='0')
        {
            x=1;
        }
        else if(s[i]=='0')
        {
            c++;
        }
        
    }
    cout<<s.size()-1-c<<endl;
    
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
