#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int x;
    cin>>x;

    vector<int>a;

    if(x%2!=0)
    {
        x=x-3;
        a.push_back(7);
    }

    for(int i=0;i<(x/2);i++)
    {
        a.push_back(1);
    }

    for(auto i :a)
    {
        cout<<i;
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
