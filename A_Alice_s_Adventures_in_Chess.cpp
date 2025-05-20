#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n,x,y;
    cin>>n>>x>>y;
    string s;
    cin>>s;

    pair<int,int>pr;
    pr={0,0};

int c=100;
while(c--){
    for(int i=0;i<n;i++)
    {
        if(s[i]=='N'){pr={pr.first,(pr.second+1)};}
        if(s[i]=='E')pr={(pr.first+1),pr.second};
        if(s[i]=='S')pr={pr.first,pr.second-1};
        if(s[i]=='W')pr={pr.first-1,pr.second};

        if(pr.first==x&&pr.second==y)
        {
            cout<<"YES"<<endl;
            return ;
        }


    }
    
}

    cout<<"NO"<<endl;
    

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
