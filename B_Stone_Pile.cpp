#include<bits/stdc++.h>
using namespace std;
int n;
vector<int>arr;

int stone(int ind ,int left ,int right)
{
    if(ind==n)return abs(left-right);
    int left_return = stone(ind+1,arr[ind]+left,right);
    int right_reuturn = stone(ind+1,left,right+arr[ind]);

    return min(left_return,right_reuturn);

}


int  main ()
{
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);


    }
    cout<<stone(0,0,0)<<endl;


}