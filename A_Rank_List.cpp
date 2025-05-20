#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

bool comp(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    if (a.first == b.first) {
        return a.second < b.second;  
    }
    return a.first > b.first;  
}
multiset<pair<int,int>>mp;
vector<pair<int,int>>ar;
    
void work(int k) {
    int x,y;
    cin>>x>>y;
    mp.insert({x,y});
    ar.push_back({x,y});

    sort(ar.begin(),ar.end(),comp);




    
}

int main() {
    optimize(); 
    int t,k;
    cin >> t>>k;  
    while (t--) {
        work(k); 
    }
    int x=ar[k-1].first;
    int y=ar[k-1].second;
    cout<<mp.count({x,y})<<endl;
    
}
