#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<long long ,long long> mp;
    mp[0]=1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i % 2 == 0) {
            a[i] *= -1;
        }
    }



    long long sum=0;

    for (int i = 0; i < n; i++) {
        sum+=a[i];
        if(mp[sum]==1)
        {
            cout<<"YES"<<endl;
            return;
        }
        mp[sum]++;


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
