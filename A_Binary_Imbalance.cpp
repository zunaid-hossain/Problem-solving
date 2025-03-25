#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int z = count(s.begin(), s.end(), '0');

    if (z > 0){
        cout << "YES\n";
        return;}
    else{
        cout << "NO\n";
        return;
    }

    
}

int main() {
    int t;
    cin >> t;  
    while (t--) {
        work(); 
    }
    return 0;
}
