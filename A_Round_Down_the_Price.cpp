#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    string s;
    cin>>s;
    int n=s.length();
    n--;
    int x=stoi(s);
    long long a=x-pow(10,n);
    cout<<a<<endl;

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
