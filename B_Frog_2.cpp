#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
long long  arr[N];
int d[N];
int k;


long long fuc(int i)
{
    long long  cost =INT_MAX;

    if(i==0)return 0;
    if(d[i]!=-1)return d[i];

    for(int j=1;j<=k;j++)
    {
        if(i-j>=0) cost = min(cost,  fuc(i-j) +abs(arr[i]-arr[i-j]));

    }
    
    return d[i] = cost;
}

void work() {
    int n;
    cin>>n>>k;
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    memset(d, -1, sizeof(d));

    cout<<fuc(n-1);
}

int main() {
    optimize(); 
    
        work(); 
    return 0;
}
