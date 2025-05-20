#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

bool lucky(string s)
{
    int x=s.size();
    int l=0;
    
    for(int i=0;i<x;i++)
    {
        if(s[i]=='4'||s[i]=='7')l++;
    }
    if(l==x){
        return true ;
    }
    else return false ;
}
void work() {
    string s;
    cin >> s;
    if (lucky(s)) {
        cout << "YES" << endl;
        return;
    }
    int a = stoi(s);

    for (int i = 1; i < 1000; i++) {
        if (a % i == 0 && lucky(to_string(a / i))) {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}


int main() {
    optimize(); 
    work(); 
}
