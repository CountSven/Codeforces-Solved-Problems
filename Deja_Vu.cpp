#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<long long> pow( 31 );
	pow[0] = 1LL;

	for ( long long i = 1; i <= 30; i++ ) pow[i] = ( pow[i-1] * 2LL );

	// for ( auto u : pow ) cout << u << "\n";

	int t;
	cin >> t;

	while ( t-- ) {
		long long n, q;
		cin >> n >> q;
		vector<long long> a(n), x(q), fnd( 31, 0 ), div;

		for ( long long i = 0; i < n; i++ ) cin >> a[i];
		for ( long long i = 0; i < q; i++ ) {
			cin >> x[i];
			if ( !fnd[x[i]] ) {
				div.push_back( x[i] );
				fnd[x[i]] = 1;
			}
		}

		for ( long long i = 0; i < n; i++ ) {
			for ( long long j = 0; j < (long long)div.size(); j++ ) {
				if ( a[i] % 2 ) break;
				if ( a[i] % pow[div[j]] == 0 ) a[i] += pow[div[j]-1];
			}
		}

		for ( long long u : a ) cout << u << " ";
		cout << "\n";
	}

	return 0;
}