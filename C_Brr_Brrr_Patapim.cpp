#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin>>n;

    vector<vector<int>> arr(n, vector<int>(n));


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    vector<int>ar(2*n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            ar[i+j+1] = arr[i][j];
        }
    }
    int x=0;
    for (int i = 1; i <= 2*n; i++) {
        if (find(ar.begin(), ar.end(), i) == ar.end()) {
            x = i;
            break;
        }

    }
    ar[0]=x;
    for(auto i:ar)
    {
        cout<<i<<" ";
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
