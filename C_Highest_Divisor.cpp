#include<bits/stdc++.h>
using namespace std;

int  main ()
{
    int t;
    cin>>t;
    int i=2;

    for(int i=10;i>1;i--)
    {
        if(t%i==0)
        {
            cout<<i<<endl;
            return 0;
        }
        

    }
    cout<<1<<endl;
}