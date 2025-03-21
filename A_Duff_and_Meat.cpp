#include<bits/stdc++.h>
using namespace std;

int  main ()
{
    int t;
    cin>>t;

    int x=INT_MAX;
    int ans =0;
    for(int i=0;i<t;i++)
    {
        int day,money;
        cin>>day>>money;

        if(money<x){x=money;}
        ans+=(day*x);
        
    }
    cout<<ans<<endl;
    

}