#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {

    string s;
    cin>>s;
    string a="hello";
    int x=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==a[x])x++;
    }
    if(a[x]=='\0')cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}

int main() {
    optimize(); 
    
    work(); 
    
    return 0;
}
