#include<bits/stdc++.h>
using namespace std;

void melody()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int c=0;
    for(int i=0;i<n-1;i++)
    {
        if(abs(arr[i]-arr[i+1])==7||abs(arr[i]-arr[i+1])==5)
        {

            c++;
        }


    }

    if(c==n-1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    
}

int  main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        melody();
    }
    
}