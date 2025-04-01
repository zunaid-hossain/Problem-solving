#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(auto &i:arr)
    {
        cin>>i;
    }   
    
        int i=0;
        while(1)
        {
            swap(arr[i],arr[n-i-1]);
            if(n/2-2<=i)
            {
                break;
            }
            i+=2;
        }
    
    for(auto i:arr)
    {
        cout<<i<<" ";

    }
    cout<<endl;
}

int main() {
    optimize(); 
    work(); 
    
    return 0;
}
