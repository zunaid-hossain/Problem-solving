#include<bits/stdc++.h>
using namespace std;

int  main ()
{
    int t;
    cin>>t;
    string s;
    cin>>s;
    int c=0,d=0;

    for( int i=0;i<t;i++)
    {
        if(s[i]=='1')c++;
        else if(s[i]=='0')d++;
    }
    if(c==d)cout<<0<<endl;

    else if(c>d)
    {
        cout<<t-(d*2)<<endl;
    }
    
    else if(c<d)
    {
        cout<<t-(c*2)<<endl;
    }
}