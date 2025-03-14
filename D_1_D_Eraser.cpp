#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n,c;
    string s;
    cin>>n>>c>>s;
    // char left,right;
    int a=0;

    for(int i=0;i<n;i++)
    {
        if (s[i] == 'B')
        {
            i+=c-1;
            a++;
        }
    }
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
