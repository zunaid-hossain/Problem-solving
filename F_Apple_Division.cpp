#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

int n;
vector<int>arr;

long long  minimal(int i,long long left,long long right)
{
    if(i==n) return abs(left-right);
    long long  left_retun = minimal(i+1,left+arr[i],right);
    long long  right_retun = minimal(i+1,left,right+arr[i]);

    return min(left_retun,right_retun);

}

void work() {
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);

    }
    cout<<minimal(0,0,0);

}

int main() {
    optimize(); 
    
        work(); 
    return 0;
}
