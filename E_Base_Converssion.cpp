#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;
vector<int> s;
void bin(int x)
{
    if(x==0)return ;

    else 
    {
        bin(x/2);
        cout<<x%2;
        

    }

}

int main() {
    optimize(); 
    int t;
    cin >> t;  
    while (t--) {
        int b;
        cin>>b;
        bin(b);
        cout<<endl;

    }
    return 0;
}
