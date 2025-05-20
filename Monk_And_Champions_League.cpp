#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n,k;
    cin>>n>>k;
    priority_queue<int>arr;
    for(int i=0;i<n;i++)
    {
        int j;
        cin>>j;
        arr.push(j);

    }
    long long sum=0;
    for(int i=0;i<k;i++)
    {
        int k=arr.top();
        sum+=k;
        arr.pop();
        arr.push(k-1);
    }
    cout<<sum<<endl;
}

int main() {
    optimize(); 
    
        work(); 
    
    return 0;
}
