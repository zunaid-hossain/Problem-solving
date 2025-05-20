#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    int x1=0,x2=0,x3=0,x4=0;
    for(int i=0;i<n;i++)
    {
        if(s1[i]=='1'&&i%2==0)x1++;
        if(s1[i]=='1'&&i%2!=0)x2++;
        if(s2[i]=='0'&&i%2==0)x3++;
        if(s2[i]=='0'&&i%2!=0)x4++;
        
    }

    if(n-(x1+x2)==n){cout<<"YES"<<endl;return;}

    if(x1<=x4&&x2<=x3)cout<<"YES"<<endl;
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
