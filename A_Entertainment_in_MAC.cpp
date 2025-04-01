#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    string s;
    cin>>n>>s;
    int x=s.length();
    for(int i=0;i<x;i++)
    {
        if(s[i]>s[x-i-1])
        {

            string sc=s;
            reverse(s.begin(),s.end());
            cout<<s<<sc<<endl;
            return ;
        }   
        else if(s[i]<s[x-i-1])
        {

            cout<<s<<endl;
            return ;
        }   

    }
    cout<<s<<endl;
    
    
    
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
