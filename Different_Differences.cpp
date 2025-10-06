#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int K,N;
		cin>>K>>N;
		int D[40];

		for(int i=0;i<K-1;i++)D[i]=1;
		N-=K;
		for(int i=K-2;i>0;i--)
		{
			if(N>=K-1-i)
			{
				N-=K-1-i;
				for(int j=i;j<K-1;j++)D[j]++;
			}
		}
		int v=1;
		cout<<"1";
		for(int i=0;i<K-1;i++)cout<<" "<<(v+=D[i]);
		cout<<"\n";
	}

	return 0;
}