#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin>>n;
    
    vector<int>arr;
    for (int i=0;i<n-2;i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);

    }
    if(n==3){
        cout<<"YES"<<endl;
        return;
    }
   


    for(int i=1;i<n-3;i++)
    {
        if(arr[i]==0&&arr[i-1]==1&&arr[i+1]==1){
            cout<<"NO"<<endl;
            return;
        }
            

    }
    cout<<"YES"<<endl;

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
