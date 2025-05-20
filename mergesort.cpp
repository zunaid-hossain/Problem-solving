// merge sort

#include<bits/stdc++.h>
using namespace std;

int arr[1000000];

int temp[1000000];

void merge(int l,int r)
{
    int mid=(l+r)/2;

    int in1=l ;
    int in2=mid+1;
    int j=l;

    while(in1<=mid&&in2<=r)
    {
        if(arr[in1]<arr[in2])
        {
            temp[j]=arr[in1];
            in1++;

        }
        else
        {
            temp[j]=arr[in2];
            in2++;

        }
        j++;
    }

    while(in1<=mid)
    {
        temp[j]=arr[in1];
        in1++;j++;
    }
    while(in2<=r)
    {
        temp[j]=arr[in2];
        in2++;j++;
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

int main()
{
    int n=0;
    int x=0;
    while (cin >>arr[x]) {
        x++;
        n++;
    }
    mergesort(0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}