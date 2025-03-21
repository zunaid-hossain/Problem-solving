#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int c1,c2,c3,a1,a2,a3,a4,a5;
    cin>>c1>>c2>>c3>>a1>>a2>>a3>>a4>>a5;

    int x=a1+a4;
    int y=a2+a5;
    c3=c3-a3;

    if(x>c1)
    {
        c3-=(x-c1);
    }
    
    if(y>c2)
    {
        c3-=(y-c2);
    }
    if(c1<a1||c2<a2)
    {
        cout<<"NO"<<endl;
    }
    
    else if(c3>=0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
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
