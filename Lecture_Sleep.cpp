#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;
	vector<int> a(n), t(n);

	long long sum = 0;

	for ( int i = 0; i < n; i++ ) cin >> a[i];

	int cnt = 0, idx1 = 0;

	for ( int i = 0; i < n; i++ ) {
		cin >> t[i];
		if ( t[i] == 1 ) sum += a[i];
		else {
			cnt++;
			if ( cnt == 1 ) idx1 = i;
		}
	}

	long long res = sum, running = 0;

	vector<pair<int, long long>> pref;

	pref.push_back( { idx1, 0LL } );

	for ( int i = 0; i < n; i++ ) {
		if ( t[i] == 0 ) {
			running += a[i];
			pref.push_back( { i+1, running } );
		}
	}

	// for (  auto u : pref ) cout << u.first << " " << u.second << "\n";

	vector<int> idxs;

	for ( auto u : pref ) idxs.push_back( u.first );

	// for ( auto u : idxs ) cout << u << " ";
	// cout << "\n";

	for ( int i = 1; i < (int)idxs.size(); i++ ) {
		int cur = upper_bound( idxs.begin(), idxs.end(), idxs[i] + k - 1 ) - idxs.begin();
		cur--;

		long long now = pref[cur].second - pref[i-1].second;

		res = max( res, sum + now );
	}

	cout << res << "\n";

	return 0;
}