#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin>>n;
    long long int  f=0,neg=0;
    vector<long long int>arr(n);
    for(auto &i:arr)
    {
        cin>>i;
        if(i==0)f++;
        if(i<0)neg++;
        

    }
    if(f>0 || neg%2!=0)
    {
        cout<<0<<endl;
        return ;

    }
    cout<<1<<endl<<1<<" "<<0<<endl;
        
    

    
        
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
