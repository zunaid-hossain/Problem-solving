#include<bits/stdc++.h>
using namespace std;

void loop()
{
    string s;
    cin >> s;
    int a = s.length();
    if (a > 0) {
        s = s.substr(0, a - 2) + "i";
    }
    cout<<s<<endl; 
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        loop();
    }
    return 0;
}
