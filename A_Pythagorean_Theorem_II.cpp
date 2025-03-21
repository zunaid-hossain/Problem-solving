#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

int check(int a,int b,int d)
{
    int x = sqrt(a*a+b*b);
    int c = (a*a+b*b);
    
    if(x*x==c&&x<=d)
    {
        // cout <<a<<" "<<b<<" "<<x<<" "<<c<<endl;

        return 1;
    }
    else 
    {
        return 0;
    }
}


void work() {
    int n;
    cin>>n;
    int sum=0;
    
    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(check(i,j,n))
        {
            sum++;
        }
        }
    }
    cout<<sum<<endl;
}

int main() {
    optimize(); 
    work();
}
