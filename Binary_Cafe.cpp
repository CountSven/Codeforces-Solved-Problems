#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> v;

	v.push_back( 1 );

	for ( int i = 1; i <= 50; i++ ) {
		if ( v.back() >= 1e9 ) break;
		
		v.push_back( v.back() * 2 );
	}

	// for ( auto u : v ) cout << u << "\n";

	int t;
	cin >> t;

	while ( t-- ) {
		int n, k;
		cin >> n >> k;

		int res;

		if ( k > 30 ) res = min( v[30], n+1 );
		else res = min( v[k], n+1 );

		cout << res << "\n";
	}

	return 0;
}