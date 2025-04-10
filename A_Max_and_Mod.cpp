#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin>>n;

    if(n%2==0)
    {
        cout<<-1<<endl;
        return;
    }
    cout<<n<<" ";
    for(int i=1;i<n;i++)
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
