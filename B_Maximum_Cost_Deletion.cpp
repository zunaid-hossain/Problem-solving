#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    if(a>=0&&b>=0)cout<<(a+b)*n<<endl;
    else if(a<0&&b>=0)cout<<(a+b)*n<<endl;
    else if(a>=0&&b<0)
    {
        
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
