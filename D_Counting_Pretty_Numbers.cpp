#include<bits/stdc++.h>
using namespace std;

int  main ()
{
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        int c=0;
        for(int i=a;i<=b;i++)
        {
            if((i%10)==2)
            {
                c++;
            }
            if((i%10)==3)
            {
                c++;
            }
            if((i%10)==9)
            {
                c++;
            }

        }
        cout<<c<<endl;


    }
}