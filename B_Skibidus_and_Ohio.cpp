#include<bits/stdc++.h>
using namespace std;

void loop()
{
    string s;
    cin>>s;
    for(int i = 0;i< s.size()-1 ; i++)
    {
        if(s[i]==s[i+1])
        {
            cout<<1<<endl;
            return;
        }
        
    }
    cout<<s.size()<<endl;

}

int  main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        loop();
    }
}