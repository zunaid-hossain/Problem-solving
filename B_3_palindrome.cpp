#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;

int N;
int main()
{
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		{
            if(i&2)cout<<"a";
            else cout<<"b";
        }
}
