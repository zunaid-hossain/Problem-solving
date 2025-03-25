#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n,k,x;
    cin>>n>>k>>x;
    if(n<k)
    {
        cout<<-1<<endl;
        return ;

    }
    if(k-x>1)
    {
        cout<<-1<<endl;
        return ;

    }
    int sum=0;
    for(int i=0;i<k;i++)
    {
        sum+=i;
    }
    if(k==x)x--;
    for(int i=k;i<n;i++)
    {
        sum+=x;
    }
    cout<<sum<<endl;
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
