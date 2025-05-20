#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    string s;
    cin>>s;

    multiset<char>ms;
    for(int i=0;i<s.size();i++)
    {
        ms.insert(s[i]);
    }

    for(int i=0;i<s.size();i++)
    {
        if(ms.count(s[i])>1)
        {
            cout<<s[i]<<endl;
            return;
        }
        
    }
    cout<<"."<<endl;

    
    
    

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
