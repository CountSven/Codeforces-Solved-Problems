#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<long long> pyr;

	for ( long long i = 1; i <= 1e9; i++ ) {
		if ( i == 1 ) pyr.push_back( i * 2 );
		else pyr.push_back( ( i * 2 ) + ( i - 1 ) + pyr[i-2] );

		if ( pyr.back() >= 1e9 ) break;
	}

	// for ( auto u : pyr ) cout << u << "\n";

	int t;
	cin >> t;

	while ( t-- ) {
		long long n;
		cin >> n;

		int cnt = 0;

		while ( n >= 2 ) {
			auto cur = upper_bound( pyr.begin(), pyr.end(), n );
			--cur;
			n -= *cur;
			cnt++;
		}

		cout << cnt << "\n";
	}

	return 0;
}