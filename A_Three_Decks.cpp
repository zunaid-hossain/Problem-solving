#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int a,b,c;
    cin>>a>>b>>c;
    long long s=a+b+c;
    if(s%3!=0)
    {
        cout<<"NO"<<endl;
        return;

    }
    if(s/3<b)
    {
        cout<<"NO"<<endl;
        return;
    }
     else 
    {
        cout<<"YES"<<endl;
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
