#include<bits/stdc++.h>
using namespace std;

int  main ()
{
    int t;
    cin>>t;
    map<string,int>mp;
    for(int i=0;i<t;i++)
    {
        int a,b;
        string s;
        cin>>a>>s;
        if(a==1)
        {
            cin>>b;
            mp[s]+=b;
        }
        else if(a==2)
        {
            mp[s]=0;
        }
        else if(a==3)
        {
            cout<<mp[s]<<endl;
        }
    }
}