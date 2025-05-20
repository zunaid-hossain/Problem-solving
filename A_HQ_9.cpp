#include<bits/stdc++.h>
using namespace std;

bool lucky(string s)
{
    int x=s.size();
    for(int i=0;i<x;i++)
    {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')return true;
    }
    
    return false ;
}

int  main ()
{
    string s;
    cin>>s;
    if(lucky(s))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}