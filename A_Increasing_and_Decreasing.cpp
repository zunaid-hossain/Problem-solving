#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int a,b,c;
    cin>>a>>b>>c;

    vector<int>arr(c);
    arr[0]=a;
    int x=arr[0];
    arr[c-1]=b;
    for(int i=2;i<=c;i++)
    {
        arr[c-i]=arr[c-i+1]+1-i;
        if(arr[0]<x)
        {
            cout<<-1<<endl;
            return;
        }
        else 
        {
            arr[0]=x;
        }
        
    }
    for(int i=0;i<c;i++)
    {
      
        cout<<arr[i]<<" ";
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
