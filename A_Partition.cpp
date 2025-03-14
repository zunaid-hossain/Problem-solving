#include<bits/stdc++.h>
using namespace std;

int  main ()
{
    int n;
    cin>>n;
    vector<int>a(n);
    int sum=0;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];

        if(a[i]<0)a[i]*=-1;

        sum+=a[i];
    

    }
    cout<<sum<<endl;
}