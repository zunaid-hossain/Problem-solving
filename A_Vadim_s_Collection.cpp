#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    string s;
    cin>>s;
    vector<int>ar;
    // sort(s.begin(),s.end());
    map<int,int>mp;
    for(int i=0;i<10;i++)mp[s[i]-'0']++;
    for(int i=9;i>=0;i--)
    {
        for(int a=0;a<10;a++)
        {
            if(mp[i+a]>0)
            {
                mp[i+a]--;
                ar.push_back(i+a);
                break;
            }
            

        }
    }

    for(auto i:ar)
    {
        cout<<i;
    }cout<<endl;

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
