#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>no,d(n);
    no.push_back(1);
    d[0]=(s[0]-'0')+1;

    for(int i=1;i<n;i++)
    {
        
        if((s[i]-'0')+1==d[i-1])
        {
            no.push_back(0);
            d[i]=(s[i]-'0');
        }
        else
        {
            no.push_back(1);
            d[i]=(s[i]-'0')+1;
        }

    }
   


    for(auto i:no)
    {
        cout<<i;
    }
    cout<<endl;

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
