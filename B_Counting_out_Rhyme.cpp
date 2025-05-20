#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int k,n;
    cin>>k>>n;

    set <int>ar;
    for (int i=1;i<=k;i++) {
        ar.insert(i);
    }

    vector<int>arr(n);
    for(auto &i:arr)
    {
        cin>>i;
    }
    int ind=0;
        
    for(int i=0;i<n;i++)
    {
       
        int s=ar.size();
        ind=(arr[i]+ind)%s;
        auto it = ar.begin();
        advance(it,ind);
        cout<<*it<<" ";
        ar.erase(*it);
    }


}

int main() {
    optimize(); 
    work(); 
    return 0;
}
