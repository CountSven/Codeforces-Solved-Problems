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
		vector<int> v(n), pref(n);

		for ( int i = 0; i < n; i++ ) cin >> v[i];

		for ( int i = 1; i+1 < n; i++ ) {
			if ( v[i] > v[i-1] && v[i] > v[i+1] ) pref[i] = 1;
			pref[i] += pref[i-1];
		}

		pref[n-1] += pref[n-2];

		// for ( auto u : pref ) cout << u << " ";
		// cout << "\n";

		int mx = 0, idx = 1;

		for ( int i = 0, j = k-1; j < n; i++, j++ ) {
			int cur = pref[j-1] - pref[i];
			// cout << i << " " << cur << "\n";
			if ( cur > mx ) {
				mx = cur;
				idx = i + 1;
			}
		}
		// cout << "\n";

		cout << mx + 1 << " " << idx << "\n";
	}

	return 0;
}