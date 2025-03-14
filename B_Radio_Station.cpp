#include<bits/stdc++.h>
using namespace std;

int  main ()
{
    int t,a;
    cin>>t>>a;
    map<string,string>mp;

    for(int i=0;i<t;i++)
    {
        string s,s2;
        cin>>s>>s2;
        s2=s2+';';
        mp[s2]=s;    
    }
    for(int i=0;i<a;i++)
    {
        string s,s2;
        cin>>s>>s2;
        cout<<s<<" "<<s2<<" #"<<mp[s2]<<endl;
    }
    
}