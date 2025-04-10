#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin>>n;
    long long int  suma=0,sumb=0;

    vector<long long >a(n);
    vector<long long >b(n);

    for(auto &i:a)
    {
        cin>>i;
        suma+=i;    

    }
    for(auto &i:b)
    {
        cin>>i;
        sumb+=i;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    
    long long int sum=min(a[0]*n+sumb,b[0]*n+suma);
    cout<<sum<<endl;
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
