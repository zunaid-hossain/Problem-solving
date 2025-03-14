#include<bits/stdc++.h>
using namespace std;

int  main ()
{
    int t;
    cin>>t;
    map<int,int>mp;
    for(int i=0;i<t;i++)
    {
        int a;
        cin>>a;
        mp[a]++;
    }
    int max =0;
    for(auto i :mp)
    {
        if(max<i.second)max=i.second;
    }
    cout<<max<<endl;

}