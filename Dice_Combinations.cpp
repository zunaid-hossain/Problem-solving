#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;
int n;
int dp[100000000];
int dice(int n)
{
    int sum=0;
    if(n==0)return 1;
    if(n<0)return 0;
    if(dp[n]!=-1)return dp[n];
    for(int i=1;i<=6;i++)
    {
        sum+=dice(n-i);
        sum%=1000000007;
    }
    dp[n]=sum;
    return sum;
}
void work() {
    cin>>n;
    cout<<dice(n)<<endl;
}

int main() {
    optimize(); 
    memset(dp,-1,sizeof(dp));
    work(); 
    return 0;
}
