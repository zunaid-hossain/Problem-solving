#include<bits/stdc++.h>
using namespace std;

int  main ()
{
    int n,m;
    cin>>n>>m;
    int c= m;
    
    if(m==n)
    {
        cout<<0<<endl;
        return 0;
    }
    else if(m<=1){
        cout<<1<<endl;
        return 0;
    }
    int arr[n];
    int ans=0;
    for(int i=0;i<n;i++)
    {
        
        if(i%2!=0)
        {
            ans++;
            m--;
      
            

        }
        if(m==0)break;
        
    }

    if(n%2==0)cout<<ans-m<<endl;
    else if (n/2>=c) cout<<ans-m<<endl;
    else  cout<<ans-m+1<<endl;
    



    
}