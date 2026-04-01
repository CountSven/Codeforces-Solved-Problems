#include<bits/stdc++.h>
using namespace std;

const int rng = 2e9;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> v;

	for ( int i = 1; i <= 100000; i++ ) {
		long long cur = ( 1LL * i * ( i + 1 ) ) / 2;
		v.push_back( cur );
		if ( cur > rng ) break;
 	}

	// cout << v.size() << " " << v.back() << "\n";
	// for ( int i = 0; i < 10; i++ ) cout << v[i] << " ";
	// cout << "\n";

	int t;
	cin >> t;

	while ( t-- ) {
		int n, k;
		cin >> n >> k;

		int idx = lower_bound( v.begin(), v.end(), k ) - v.begin();

		int f = ( n - 2 ) - idx;
		int s = f + ( abs( k - v[idx] ) + 1 );

		// cout << f << " " << s << "\n";

		for ( int i = 0; i < n; i++ ) {
			if ( i == f || i == s ) cout << 'b';
			else cout << 'a';
		}
		cout << "\n";
	}

	return 0;
}