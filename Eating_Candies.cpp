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
		vector<long long> v(n);

		for ( int i = 0; i < n; i++ ) cin >> v[i];

		vector<long long> pref(n), suf(n);

		pref[0] = v[0];

		for ( int i = 1; i < n; i++ ) pref[i] = v[i] + pref[i-1];

		reverse( v.begin(), v.end() );

		suf[0] = v[0];

		for ( int i = 1; i < n; i++ ) suf[i] = v[i] + suf[i-1];

		reverse( suf.begin(), suf.end() );

		vector<long long> cur(n);

		for ( int i = 0; i < n; i++ ) cur[i] = min( pref[i], suf[i] );

		// for ( auto u : pref ) cout << u << " ";
		// cout << "\n";
		// for ( auto u : suf ) cout << u << " ";
		// cout << "\n";
		// for ( auto u : cur ) cout << u << " ";
		// cout << "\n";

		map<long long, int> mp;

		long long mx = 0, f = 0;

		for ( int i = 0; i < n; i++ ) {
			mp[cur[i]]++;

			if ( mp[cur[i]] >= 2 ) {
				mx = max( mx, cur[i] );
				f = 1;
			}
		}

		if ( !f ) cout << 0 << "\n";
		else {
			int l = -1, r = -1, now = 0;

			for ( int i = 0; i < n; i++ ) {
				if ( cur[i] == mx && !now ) {
					l = i;
					now = 1;
				}
				else if ( cur[i] == mx && now ) {
					r = i;
					break;
				}
			}

			int cnt = 0;

			for ( int i = 0; i <= l; i++ ) cnt++;
			for ( int i = r; i < n; i++ ) cnt++;

			cout << cnt << "\n";
		}
	}

	return 0;
}