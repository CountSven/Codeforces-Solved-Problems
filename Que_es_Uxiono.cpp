#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<long long> v;

	v.push_back( 1 );
	long long prev = 1;

	for ( int i = 1; i <= 60; i++ ) {
		long long cur = v.back();

		if ( i % 2 ) v.push_back( 1LL * cur + prev );
		else {
			v.push_back( cur + ( 1LL * 2 * prev ) );
			prev *= 2;
		}
	}

	// int occ = 0;
	// for ( auto u : v ) cout << occ++ << " " << u << "\n";

	int t;
	cin >> t;

	while ( t-- ) {
		int m;
		cin >> m;
		cout << v[m] << "\n";
	}

	return 0;
}