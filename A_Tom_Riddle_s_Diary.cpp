#include<bits/stdc++.h>
using namespace std;

int  main ()
{
    int t;
    cin>>t;
    map<string,int> a;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        if(a[s]==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        a[s]++;
        
    }
  
    
}