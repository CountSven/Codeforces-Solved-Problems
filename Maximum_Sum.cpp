#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, k;
		cin >> n >> k;
		vector<int> v(n);

		for ( int i = 0; i < n; i++ ) cin >> v[i];

		sort( v.begin(), v.end() );

		// for ( auto u : v ) cout << u << " ";
		// cout << "\n";

		long long sum = 0;

		for ( int i = 0; i < n-k; i++ ) sum += v[i];

		long long res = sum;

		int l = 0, r = n-k;

		while ( r < n ) {
			sum += v[r];
			sum -= ( v[l] + v[l+1] );
			l += 2;
			r++;

			res = max( res, sum );
		}

		cout << res << "\n";
	}

	return 0;
}