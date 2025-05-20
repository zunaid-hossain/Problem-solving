#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    string s, s2;
    cin >> s >> s2;

    vector<pair<int,char>>a;
    vector<pair<int,char>>b;

    int x=1;
    char c;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==s[i+1])
        {
            x++;
            c=s[i];
            
        }
        else
        {
            c=s[i];   
            a.push_back({x,c});
            x=1;
            // c=s[i+1];
        }
    }
    int y=1;
    for(int i=0;i<s2.size();i++)
    {
        if(s2[i]==s2[i+1])
        {
            y++;
            c=s2[i];
        
        }
        else 
        {
            c=s2[i];
            b.push_back({y,c});
            y=1;
            // c=s2[i+1];
        }
    }

    if(a.size()!=b.size())
    {
        cout<<"NO"<<endl;
        return;
    }
    for(int i=0;i<b.size();i++)
    {
        
    
        if(a[i].first>b[i].first||b[i].first>2*a[i].first||a[i].second!=b[i].second)
        {   
            cout<<"NO"<<endl;
            return;
        }

            
        
    }
    cout<<"YES"<<endl;
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
