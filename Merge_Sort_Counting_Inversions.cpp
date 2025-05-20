#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

int arr[10000000];
int temp[10000000];
long long c=0;
void merge(int l,int r)
{
    
    int mid=(l+r)/2;
    int lp=l,lr=mid+1,j=l;

    while(lp<=mid&&lr<=r)
    {
        
        if(arr[lp]<=arr[lr])
        {
            c+=lr-(mid+1);
            temp[j]=arr[lp];
            lp++;
  
        
        }
        else
        {
            temp[j]=arr[lr];
            lr++;
    
        }
        j++;
    }
    while(lp<=mid)
    {
        temp[j]=arr[lp];
        lp++;
        j++;
        c+=(r-mid);
        
    }
    
    while(lr<=r)
    {
        temp[j]=arr[lr];
        lr++;
        j++;
    }
    

    for(int i=l;i<=r;i++)
    {
        arr[i]=temp[i];
    }


}


void mergesort(int l,int r)
{
    if(l==r)return ;

    int mid=(l+r)/2;

    mergesort(l,mid);
    mergesort(mid+1,r);

    merge(l,r);
}


void work() {
    int n;
    cin>>n;
    c=0;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    mergesort(0,n-1);
    cout<<c<<endl;

}

int main() {
    optimize(); 
    int x;
    cin>>x;
    while(x--)work();
    return 0;
}
