
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin>>n;
    vector<int>a;
    for (int i=0;i<n;i++)
    {
        int f;
        cin>>f;
        a.push_back(f);

    }

    for (int i=0;i<n;i++)
    {
        if(a[i]<=i+1)
        {
            cout<<"YES"<<endl;
            return;
        }

    }
    cout<<"NO"<<endl;

}

int main() { 
    int t;
    cin >> t;  
    while (t--) {
        work(); 
    }
    return 0;
}
