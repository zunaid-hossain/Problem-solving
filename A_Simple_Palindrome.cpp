#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin>>n;
    vector<char>arr;
    string s ={'a','e','i','o','u'};
    for(int i=0;i<n;i++)
    {
        arr.insert(arr.begin()+(i%5),(s[i%5]));

    }
    sort(arr.begin(),arr.end());
    for(auto i:arr)
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
