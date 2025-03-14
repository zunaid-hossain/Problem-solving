#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int m, n;
    cin>>m>>n; 
    int arr[m][n];
    map<int,int> ma ;


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            ma[arr[i][j]]++;
        }
    }
    if(m==1&&n==1)
    {
        cout<<0<<endl;
        return;
    }
    int c=0,b=0,d=0;
    for(auto i :ma)
    {
        if(i.second>d)d=i.second;
        b++;
        
    }
    cout<<b<<" "<<d<<" ";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if(arr[i][j]==arr[i+1][j]||arr[i][j]==arr[i][j+1])
            {
                c++;

            }
            
            

        }
    }
    cout<<c<<endl;
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
