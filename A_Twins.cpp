#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    
    int n;
    cin>>n;
    long long  sum=0;
    
    
    vector<int>ar(n);
    for(auto &i:ar)
    {
        cin>>i;
        sum+=i;

    }
    sort(ar.rbegin(),ar.rend());

    for(int i=1;i<n;i++)
    {
        ar[i]=ar[i-1]+ar[i];
    }
    
    float s=(sum *1.0/2);
    for(int i=0;i<n;i++)
    {
        if(s<ar[i])
        {
            cout<<i+1<<endl;
            return ;
        }

    }
}

int main() {
    optimize(); 
    work();
}
