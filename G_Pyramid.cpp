#include<bits/stdc++.h>
using namespace std;

void work(int n)
{
    if(n==0)return;

    work(n-1);
    for(int i=0;i<n;i++)
    {
        cout<<" ";
    }
}
int  main ()
{
    int t;
    cin>>t;
    work(t);
}