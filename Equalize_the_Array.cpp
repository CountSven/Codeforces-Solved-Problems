#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;
		map<int, int> mp;

		for ( int i = 0, x; i < n; i++ ) {
			cin >> x;
			mp[x]++;
		}

		vector<ll> v, pref;

		for ( auto [x, y] : mp ) v.push_back( y );

		sort( v.begin(), v.end() );

		int sz = v.size();

		pref.resize( sz );

		pref[0] = v[0];

		for ( int i = 1; i < sz; i++ ) pref[i] += v[i] + pref[i-1];

		// for ( auto u : v ) cout << u << " ";
		// cout << "\n";
		// for ( auto u : pref ) cout << u << " ";
		// cout << "\n";

		int res = n;

		for ( int i = 0; i < sz; i++ ) {
			int cur = 0;

			if ( i ) {
				int idx = lower_bound( v.begin(), v.end(), v[i] ) - v.begin();
				idx--;
				if ( idx >= 0 ) cur += pref[idx];
			}
			if ( i+1 < sz ) {
				int idx = upper_bound( v.begin(), v.end(), v[i] ) - v.begin();
				idx--;
				if ( idx+1 != sz ) {
					int tot = pref[sz-1] - pref[idx];
					int pt1 = idx+1, pt2 = sz-1;
					int cnt = pt2 - pt1 + 1;
					tot -= v[i] * cnt;
					cur += tot;
				}
			}
			// cout << i << " " << cur << "\n";
			res = min( res, cur );
		}

		cout << res << "\n";
	}

	return 0;
}