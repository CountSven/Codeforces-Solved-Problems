#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	vector<long long> v(n), pref(n+1), suff(n+1);

	for ( int i = 0; i < n; i++ ) {
		cin >> v[i];
		pref[i+1] = pref[i] + v[i];
	}

	reverse( v.begin(), v.end() );

	for ( int i = 0; i < n; i++ ) suff[i+1] = suff[i] + v[i];

	// for ( auto u : pref ) cout << u << " ";
	// cout << "\n";
	// for ( auto u : suff ) cout << u << " ";
	// cout << "\n";	

	long long res = 0;

	for ( int i = 0; i <= n; i++ ) {
		int cur = lower_bound( suff.begin(), suff.end(), pref[i] ) - suff.begin();
		// cout << i << " " << cur << "\n";

		if ( i + cur <= n && pref[i] == suff[cur] ) res = max( res, suff[cur] );
	}

	cout << res << "\n";

	return 0;
}