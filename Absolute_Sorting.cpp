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
		int a[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		int l = 0, r = 1e9;

		for ( int i = 0; i+1 < n; i++ ) {
			if ( a[i] == a[i+1] ) continue;
			else if ( a[i] > a[i+1] ) l = max( l, ( a[i] + a[i+1] + 1 ) / 2 );
			else r = min( r, ( a[i] + a[i+1] ) / 2 );
		}

		if ( l > r ) cout << -1 << "\n";
		else cout << l << "\n";
	}

	return 0;
}