#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;
int n;
vector<int>arr;
const int INF = 1e9;
int dp[100000000];

int mini(int a) {
    if (a == 0) return 0;
    if (a < 0) return INF;
    if (dp[a] != -1) return dp[a];

    int min_sum = INF;
    for (int i = 0; i < n; i++) {
        min_sum = min(min_sum, mini(a - arr[i]) + 1);
    }

    return dp[a]=min_sum;
}

void work() { 
    int k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);

    }
    if(mini(k)>=INF)cout<<-1<<endl;
    else cout<<mini(k)<<endl;
        
}

int main() {
    optimize(); 
    memset(dp,-1,sizeof(dp));
        work(); 
    return 0;
}
