#include<bits/stdc++.h>
using namespace std;

int  main ()
{
    int n;
    cin>>n;

    vector<int>a;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int c;
        cin>>c;
        a.push_back(c);
        mp[c]++;

    }
    long long  sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<32;j++)
        {
            int powx=1<<j;
            int el=powx-a[i];

            sum+=mp[el];

            if(el==a[i])sum--;
        }
    }
    cout<<(sum/2)<<endl;
}