#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int a[n], pref[n], suff[n];

	for ( int i = 0; i < n; i++ ) cin >> a[i];

	int last = -1, cnt = 0;

	for ( int i = 0; i < n; i++ ) {
		if ( a[i] > last ) cnt++;
		else cnt = 1;
		pref[i] = cnt;
		last = a[i];
	}

	last = 2e9, cnt = 0;

	for ( int i = n-1; i >= 0; i-- ) {
		if ( a[i] < last ) cnt++;
		else cnt = 1;
		suff[i] = cnt;
		last = a[i];
	}

	// for ( auto u : pref ) cout << u << " ";
	// cout << "\n";
	// for ( auto u : suff ) cout << u << " ";
	// cout << "\n";

	int res = max( pref[n-1], suff[0] );

	for ( int i = 1; i+1 < n; i++ ) {
		int inc, exc;

		if ( a[i-1] < a[i] ) inc = pref[i-1] + suff[i];
		else inc = max( pref[i-1], suff[i] );
		if ( a[i-1] < a[i+1] ) exc = pref[i-1] + suff[i+1];
		else exc = max( pref[i-1], suff[i+1] ); 

		res = max( res, max( inc, exc ) );
	}

	cout << res << "\n";

	return 0;
}