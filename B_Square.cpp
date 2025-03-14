#include<bits/stdc++.h>
using namespace std;

void squre()
{
    int x1,x2,x3,x4,y1,y2,y3,y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    if(x1==x2)cout<<pow(abs(y1-y2),2)<<endl;
    else if(x1==x3)cout<<pow(abs(y1-y3),2)<<endl;
    else if(x1==x4)cout<<pow(abs(y1-y4),2)<<endl;
    
}

int  main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        squre();
    }
}