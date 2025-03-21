#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=0;
    int i=n-1;
    int j=i-1;
    while(1)
    {
        if(j<0)break;
        if(a[j]>a[i])
        {
            sum++;
            i=j;
        }
        else
        {
            j--;
        }
       

    }
    cout<<sum<<endl;
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
