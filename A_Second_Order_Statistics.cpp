#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work(int i) {

    vector<int>arr(i);

    for(auto &n:arr)
    {
        cin>>n;
    }

    sort(arr.begin(),arr.end());
    int x=arr[0];
    for(auto i:arr)
    {
        if(x<i)
        {
            cout<<i<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;

}

int main() {
    optimize(); 
    int t;
    cin >> t;  
    work(t); 
    
    return 0;
}
