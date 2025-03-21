#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin>>n;
    vector<int >a;
    map<int,int>arr;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr[x]++;

    }

    for(int i=0;i<arr.size();i++)
    {
        a.push_back(arr.size());
    }
    for(int i=arr.size();i<n;i++)
    {
        a.push_back(a.back()+1);
    }

    for(auto i:a)
    {
        cout<<i<<" ";
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
