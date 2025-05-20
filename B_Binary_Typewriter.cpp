#include <bits/stdc++.h>
using namespace std;
long long  n;

void solveCase(string &s) {

    int l=0,r=0;

    for (long long  i = 0; i < n; i++) {
        if (s[i] == '1'){
            l=i;
            break;
        }
    }

    for (long long  i = l+1; i < n; i++) {
        if (s[i] == '1'&&s[i+1]=='0'){
            r=i+1;
            break;
        }
        r=n-1;
    }


    reverse(s.begin() + l, s.begin() + r + 1);
    // cout<<s<<endl;
    long long cost = 0;
    cost += (s[0] == '0') ? 1 : 2;

    for (long long  i = 1; i < n; i++) {
        if (s[i] == s[i - 1])
            cost += 1;
        else
            cost += 2;
    }

    cout << cost << endl;
}

int  main() {
    long long  t;
    cin >> t;
    while (t--) {
        
        string s;
        cin >> n >> s;
        solveCase(s);
    }

}
