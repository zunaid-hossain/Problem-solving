#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    for(int i=0;i<3;i++)
    {
        if(s1[i]==s2[i]&&s2[i]==s3[i])
        {
            if(s1[i]!='.')
            {
                cout<<s1[i]<<endl;
                return;
            }
            
        }
    }
    if((s1[0]==s2[1]&&s2[1]==s3[2])||s1[2]==s2[1]&&s2[1]==s3[0])
    {
        if(s2[1]!='.')
        {
            cout<<s2[1]<<endl;
            return;
        }
    }
    if(s1[0]==s1[1]&&s1[1]==s1[2])
    {
        if(s1[1]!='.')
        {
            cout<<s1[1]<<endl;
            return;
        }
    }
    if(s2[0]==s2[1]&&s2[1]==s2[2])
    {
        if(s2[1]!='.')
        {
            cout<<s2[1]<<endl;
            return;
        }
    }
    
    if(s3[0]==s3[1]&&s3[1]==s3[2])
    {
        if(s3[1]!='.')
        {
            cout<<s3[1]<<endl;
            return;
        }
    }

    cout<<"DRAW"<<endl;



}

int main() {
    optimize(); 
    int t;
    cin >> t;  
    while (t--) {
        work(); 
    }
    return 0;
}
