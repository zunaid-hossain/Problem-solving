#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string f;
        cin >> f;
        int a; 
        cin >> a;


        while (a--) {
            int c;
            char d;
            cin >> c >> d;
           
            

            f[c-1]=d;
            
            
            if (f.find("1100") != string::npos) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
               
        }
    }
    return 0;
}
