#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;
int n;
vector<int>arr;
int  dp[100000000];

long long coin_count(int k)
{
    int sum=0;
    if(k==0)return 1;
    if(k<0)return 0;
    if(dp[k]!=-1)return dp[k];
    for(int i=0;i<n;i++)
    {
        sum+=coin_count(k-arr[i]);
        sum%=1000000007;
        
    }
    dp[k]=sum;

    return sum;
}

void work() {
    int k;
    memset(dp ,-1,sizeof(dp));
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);
    }

    cout<<coin_count(k)<<endl;;

}

int main() {
    optimize(); 
    
        work(); 
    return 0;
}
