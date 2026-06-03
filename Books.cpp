#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, t;
	cin >> n >> t;
	vector<int> v(n), pref(n+1);

	for ( int i = 0; i < n; i++ ) {
		cin >> v[i];
		pref[i+1] += v[i];
		pref[i+1] += pref[i];
	}

	// for ( int i = 0; i <= n; i++ ) cout << pref[i] << " ";
	// cout << "\n";

	int mx = 0;

	for ( int i = 0; i <= n; i++ ) {
		int idx = upper_bound( pref.begin(), pref.end(), pref[i] + t ) - pref.begin();
		idx--;
		int rng = idx - i;
		// cout << i << " " << rng << "\n";
		mx = max( mx, rng );
	}

	cout << mx << "\n";

	return 0;
}