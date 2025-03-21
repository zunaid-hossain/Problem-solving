#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int a;
    cin>>a;
    string s;
    cin>>s;
    int sum=a-1;

    for(int i=0;i<a;i++)
    {
        if(s[i]=='B')sum--;
        else 
        {
               break;
        }

    }
    
    for(int i=a-1;i>=0;i--)
    {
        if(s[i]=='A')sum--;
        else 
        {
            break;
        }
    }
    
    cout<<(sum<0?0:sum)<<endl;
    

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
