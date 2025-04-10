#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    string s;
    cin>>n>>s;
    int x=0;
    int y=0;

    for(auto i:s)
    {
        if(i=='0')x++;
        else x--;


        if(x==0)
        {
            y++;
        }
    }
    cout<<(1<<y)<<endl;
    

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
