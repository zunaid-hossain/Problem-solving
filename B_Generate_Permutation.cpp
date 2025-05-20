#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin>>n;

    if(n%2==0)
    {
        cout<<-1<<endl;
        return;

    }
    

    vector<long long >arr(n);
    int x=2,y=3;
    arr[0]=1;
    for(int i=1;i<n;i++)
    {
        if(i%2==0)
        {
            arr[i]=x;
            x+=2;
        }
        else
        {
            arr[i]=y;
            y+=2;
        }

    }
    for(auto i:arr)
    {
        cout<<i<<" ";
    }

    cout<<endl;
    
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
