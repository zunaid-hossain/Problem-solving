#include<bits/stdc++.h>
using namespace std;

void brad()
{
    int n,k;
    cin>>n>>k;
    
    vector<pair<int, int>> vec;

    for(int i=0;i<k;i++)
    {
        int a,b;
        cin>>a>>b;
        vec.push_back(make_pair(a, b));

    }

    sort(vec.begin(), vec.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
        return a.second > b.second;
    });

    int sum = 0;
    for (size_t i = 0; i < k && i < n; i++) {
        sum += vec[i].second; 
    }


    cout<<sum<<endl;


}

int  main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        brad();

    }
    
}