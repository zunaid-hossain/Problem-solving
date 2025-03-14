#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int c=0;
    int ha,hb,ka,kb,qa,qb;
    cin>>ha>>hb>>ka>>kb>>qa>>qb;
    
    set<pair<int,int>>dic1,dic2;
    pair<int,int>pp;

    vector<int>hax = {ha, ha, -ha, -ha, hb, hb, -hb, -hb};
    vector<int>hby = {hb, -hb, hb, -hb, ha, -ha, ha, -ha};
    for(int i=0;i<8;i++)
    {
        int x=hax[i]+ka;
        int y=hby[i]+kb;
        dic1.insert({x, y});

    }
    for(int i=0;i<8;i++)
    {
        int x=hax[i]+qa;
        int y=hby[i]+qb;
        dic2.insert({x, y});

    }


    for(auto x :dic1)
    if(dic2.find(x) != dic2.end())
        c++;
    cout <<c << '\n';
    
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
