#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin>>n;
    vector<int>ms(n);

    for(auto &i:ms)
    {
        cin>>i;
    }
    vector<long int>ar(n);
    reverse(ms.begin(),ms.end());

    for(int i=0;i<n;i++)
    {
        for (int j = i; j <= r; ++i) {
            if (arr[i] > maxElement) {
                maxElement = arr[i];
            }
        }
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
