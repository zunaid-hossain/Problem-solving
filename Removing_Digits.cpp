#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;
#define INF 1e9;

int dp[100000000];


int remover(int x)
{
    if(x==0)return 0;
    if(dp[x]!=-1)return dp[x];


    int temp = x;
    int min_sum=INF;
    while(temp >0)
    {
        int d=temp%10;
        if (d != 0)
        min_sum=min(min_sum,remover(x-d)+1 );
        temp/=10;
    }
    return dp[x]=min_sum;
    
    
}
void work() {
    int n;
    cin>>n;
    cout<<remover(n);

}

int main() {

    optimize();     
    memset(dp,-1,sizeof(dp));
    work(); 
    return 0;
}
