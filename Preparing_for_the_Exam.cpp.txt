#include<bits/stdc++.h>
using namespace std;
int n,m,k;
int a[3<<17];
int q[3<<17];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int T;cin>>T;
	for(;T--;)
	{
		cin>>n>>m>>k;
		for(int i=0;i<m;i++)cin>>a[i];
		for(int i=1;i<=n;i++)q[i]=0;
		for(int i=0;i<k;i++)
		{
			int v;cin>>v;
			q[v]=1;
		}
		if(k==n)
		{
			for(int i=0;i<m;i++)cout<<1;
		}
		else if(k+1==n)
		{
			int v=1;
			while(v<=n&&q[v])v++;
			assert(v<=n);
			for(int i=0;i<m;i++)cout<<(v==a[i]?1:0);
		}
		else
		{
			for(int i=0;i<m;i++)cout<<0;
		}
		cout<<"\n";
	}
}
