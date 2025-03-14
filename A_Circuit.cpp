#include<bits/stdc++.h>
using namespace std;
void circuit()
{
    int n;
    cin>>n;
    int arr[2*n];
    int noi=0;
    for(int i=0;i<2*n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)noi++;

    }
    if(noi==0||noi==2*n)cout<<0<<" "<<0<<endl;

    else if(n%2!=0 &&noi%2!=0)
    {
        if(n<noi)cout<<1<<" "<<2*n-noi<<endl;
        else cout<<1<<" "<<noi<<endl;
    }

    else if(n%2==0 &&noi%2==0)
    {
        if(n<noi)cout<<0<<" "<<2*n-noi<<endl;
        else cout<<0<<" "<<noi<<endl;
    }
    else if(n%2!=0 &&noi%2==0)
    {
        if(n<noi)cout<<0<<" "<<2*n-noi<<endl;
        else cout<<0<<" "<<noi<<endl;
    }
    else if(n%2==0 &&noi%2!=0)
    {
        if(n<noi)cout<<1<<" "<<2*n-noi<<endl;
        else cout<<1<<" "<<noi<<endl;
    }
    
}

int  main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        circuit();
    }
    
    
}