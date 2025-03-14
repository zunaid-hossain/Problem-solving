#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a<b&&a<c&&b<d&&c<d)cout<<"YES"<<endl;
    else if(c<a&&c<d&&a<b&&d<b)cout<<"YES"<<endl;

    else
    {
        cout<<"NO"<<endl;
    }
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
