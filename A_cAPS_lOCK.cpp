#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    string s;
    cin>>s;
    if(s[0]>=97)s[0]-=32;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]<=97)s[i]+=32;
    
    }
    cout<<s<<endl;


}

int main() {
    optimize(); 
        work(); 
    return 0;
}
