#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;
		vector<int> v(n-1), r;

		for ( int i = 0; i < n-1; i++ ) cin >> v[i];

		reverse( v.begin(), v.end() );

		r.push_back( v[0] );
		r.push_back( 1e9-1 );

		for ( int i = 1; i < n-1; i++ ) r.push_back( r.back() - v[i] );

		reverse( r.begin(), r.end() );
		
		for ( auto u : r ) cout << u << " ";
		cout << "\n";
	}

	return 0;
}