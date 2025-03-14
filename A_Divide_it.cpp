#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    long long  a;
    cin>>a;
    int c=0;

    while(a>=1)
    {
        if(a%2==0)a=a/2;
        else if(a%3==0)a=(2*a)/3;
        else if(a%5==0)a=(4*a)/5;
        else if (a>1) a=-1;
        else 
        {
            cout<<c<<endl;
            return;
        }
        c++;

    }
    cout<<-1<<endl;
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
