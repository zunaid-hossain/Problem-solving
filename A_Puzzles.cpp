#include<bits/stdc++.h>
using namespace std;

int  main ()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(m);

    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    
    sort(a.begin(),a.end());
    if(n==m)
    {
        cout<<(a[n-1]-a[0])<<endl;
        return 0;
    }
    int minN=INT_MAX;

    for(int i=0;i<=(m-n);i++)
    {
        
        minN=min(a[i+n-1]-a[i],minN);
        
    }
    cout<<minN<<endl;

    
}