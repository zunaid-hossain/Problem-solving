#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

int x,y;

int work(int n)
{
    int sum;
    if(n<=y)return 1;

    if(n%2==0){
      return work(n/2)+work(n/2);
    }
    else 
    {
      return  work(n/2+1)+work(n/2);
    }

}

int main() {
    optimize(); 
    
    while(cin>>x>>y)
    {
        cout<<work(x)<<endl;
    }
    return 0;
}
