#include<bits/stdc++.h>
using namespace std;

void recursion(long long  n)
{
    cout<<n<<" ";
    if(n==1)return;
    if(n%2==0)
    {

        recursion(n/2);
    }
    else
    {
        recursion(n*3+1);
    }
}

int  main ()
{
    int t;
    cin>>t;
    recursion(t);
}