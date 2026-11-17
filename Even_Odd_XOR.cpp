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
		vector<int> v;

		int cur = 0;

		for ( int i = 0; i + 3 < n; i++ ) {
			cur ^= i;
			v.push_back( i );
		}

		cur ^= ( 1 << 28 );
		v.push_back( 1 << 28 );

		cur ^= ( 1 << 29 );
		v.push_back( 1 << 29 );

		v.push_back( cur );

		for ( int i = 0; i < n; i++ ) cout << v[i] << " \n"[i + 1 == n];
	}

	return 0;
}