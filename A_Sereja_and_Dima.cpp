#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s=0,d=0;
    cin>>n;
    vector<int>a;

    for (int i=0;i<n;i++) 
    {
        int b;
        cin>>b;
        a.push_back(b);
    }
    sort(a.begin(), a.end());

    while(1)
    {
        s=s+a.back();
        a.pop_back();
        n--;
        if(n==0)break;
        d=d+a.back();
        a.pop_back();
        n--;
        if(n==0)break;

    }
    cout<<s<<" "<<d;
}