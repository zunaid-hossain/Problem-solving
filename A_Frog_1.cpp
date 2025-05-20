#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
long long  arr[N];
int d[N];



long long fuc(int i)
{
    long long  cost =INT_MAX;

    if(i<=0)return 0;
    if(d[i]!=-1)return d[i];


    cost = min(cost,  fuc(i-1) +abs(arr[i]-arr[i-1]));
    if(i>1) cost = min(cost,  fuc(i-2) +abs(arr[i]-arr[i-2]));

    return d[i] = cost;
}

void work() {
    int n;
    cin>>n;
    
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
