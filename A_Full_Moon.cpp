#include<bits/stdc++.h>
using namespace std;

int  main ()
{
    int N,M,P;
    cin>>N>>M>>P;
    int s=0;
    while(M<=N)
    {
        s++;
        M+=P;

    }
    cout<<s<<endl;


    
}