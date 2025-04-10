#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin>>n;

    vector<int>arr(n);

    for(auto &i:arr)
    {
        cin>>i;
    }

    if(n%2==0)
    {
        cout<<2<<endl<<1<<" "<<n<<endl<<1<<" "<<n<<endl;
    }
    
    if(n%2!=0)
    {
        cout<<4<<endl<<1<<" "<<n-1<<endl<<1<<" "<<n-1<<endl<<n-1<<" "<<n<<endl<<n-1<<" "<<n<<endl;
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
