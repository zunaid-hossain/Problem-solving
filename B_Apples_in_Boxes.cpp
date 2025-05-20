#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    long long  ma=INT_MIN;
    long long  mi=INT_MAX;
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>ma)ma=arr[i];
        if(arr[i]<mi)mi=arr[i];
        sum+=arr[i];

    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] == ma) cnt++;
        
    if (ma - mi > k + 1 || (ma - mi == k + 1 && cnt > 1)) {
        cout << "Jerry\n";
    } else {
        cout << (sum % 2 ? "Tom\n" : "Jerry\n");
    }

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
