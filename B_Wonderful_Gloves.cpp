#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b) {
    return a.second > b.second;
}

void work() {
    int n, k;
    cin>>n>>k;
    long long  sum=0;

    vector<int>a(n),b(n);
    for(auto &i:a)
    {
        cin>>i;
    }
    for(auto &i:b)
    {
        cin>>i;
    }
    vector<pair<long long ,long long >>ar;

    long long x= max(a[0],b[0]);
    long long y= min(a[0],b[0]);

    ar.push_back({x,y});

    for(int i=1;i<n;i++)
    {
        long long x= max(a[i],b[i]);
        long long y= min(a[i],b[i]);
        ar.push_back({(ar[i-1].first+x),y});
    }
    sum=ar[n-1].first;
    sort(ar.begin(),ar.end(),comp);

    for(int i=0;i<k-1;i++)
    {
        sum+=ar[i].second;
    }
    cout<<sum+1<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        work();
    }
    return 0;
}
