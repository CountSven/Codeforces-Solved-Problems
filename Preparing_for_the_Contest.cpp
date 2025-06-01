#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ){
		int n, k;
		cin >> n >> k;
		vector<int> v(n);

		for ( int i = 0; i < n; i++ ) v[i] = i+1;

		sort( v.rbegin(), v.rend() );

		sort ( v.begin(), v.begin()+k+1 );

		for ( auto u : v ) cout << u << " ";
		cout << "\n";
	}

	return 0;
}