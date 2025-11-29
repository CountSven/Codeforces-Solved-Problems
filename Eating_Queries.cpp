#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, q;
		cin >> n >> q;
		vector<int> v(n);

		for ( int i = 0; i < n; i++ ) cin >> v[i];

		sort( v.rbegin(), v.rend() );

		vector<long long> pref(n);

		pref[0] = v[0];

		for ( int i = 1; i < n; i++ ) pref[i] = v[i] + pref[i-1];

		// for ( auto u : pref ) cout << u << " ";
		// cout << "\n";
		
		while ( q-- ) {
			long long cur;
			cin >> cur;

			int idx = lower_bound( pref.begin(), pref.end(), cur ) - pref.begin();

			if ( idx == n ) cout << -1 << "\n";
			else cout << idx+1 << "\n";
		}	
	}

	return 0;
}