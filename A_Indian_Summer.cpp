#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;
set<pair<string,string>>s;
void work() {
    string ss1,ss2;
    cin>>ss1>>ss2;
    s.insert({ss1,ss2});

}

int main() {
    optimize(); 
    int t;
    cin >> t;  
    while (t--) {
        work(); 
    }
    cout<<s.size()<<endl;
    return 0;
}
