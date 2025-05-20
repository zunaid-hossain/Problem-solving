#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin>>n;
    vector<int>price(n),a(n),b(n);


    for(auto &i:price)cin>>i;
    for(auto &i:a)cin>>i;
    for(auto &i:b)cin>>i;

    int c;
    cin>>c;
    vector<int>cost(c);
    for(auto &i:cost)cin>>i;

    multiset<int>aa,bb,cc;

    for(int i=0;i<n;i++)
    {
        if(a[i]==1)aa.insert(price[i]);
        if(a[i]==2)bb.insert(price[i]);
        if(a[i]==3)cc.insert(price[i]);
        
        
        if(b[i]==1)aa.insert(price[i]);
        if(b[i]==2)bb.insert(price[i]);
        if(b[i]==3)cc.insert(price[i]);
        
    }

    for(int i=0;i<c;i++)
    { 
        if(cost[i]==1)
        {
            if (aa.empty()) {
                cout<<-1<<" ";
                continue;
            }
            cout << *aa.begin()<<" ";
            int x=*aa.begin();

            aa.erase(x);
            bb.erase(x);
            cc.erase(x);
        }
        if(cost[i]==2)
        {
            
            if (bb.empty()) {
                cout<<-1<<" ";
                continue;
            }
            cout << *bb.begin()<<" ";
            int x=*bb.begin();
            
            aa.erase(x);
            bb.erase(x);
            cc.erase(x);
        }

        if(cost[i]==3)
        {
    
            
            if (cc.empty()) {
                cout<<-1<<" ";
                continue;
            }
            cout << *cc.begin()<<" ";
            int x=*cc.begin();
            aa.erase(x);
            bb.erase(x);
            cc.erase(x);
        
        }

    }

    
    
}

int main() {
    optimize(); 
    
        work(); 
    return 0;
}
