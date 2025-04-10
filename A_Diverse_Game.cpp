#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int m,n;
    cin>>m>>n;

    vector<vector<int>> arr(m, vector<int>(n));

    for (int i = 0; i < m; i++)
    {
    for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }
    
    int first = arr[0][0];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == m - 1 && j == n - 1)
                continue;
            int next_i = (j + 1 == n) ? i + 1 : i;
            int next_j = (j + 1 == n) ? 0 : j + 1;
            arr[i][j] = arr[next_i][next_j];
        }
    }

    arr[m - 1][n - 1] = first;

    if(n==1&&m==1)
    {
        cout<<-1<<endl;
        return;

    }

    for (int i = 0; i < m; i++)
    {
    for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
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
