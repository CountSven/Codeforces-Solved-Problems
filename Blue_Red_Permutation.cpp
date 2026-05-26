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

		string s;
		cin >> s;

		vector<pair<int, int>> v;

		for ( int i = 0; i < n; i++ ) {
			if ( s[i] == 'B' ) {
				v.push_back( { min( a[i], 1 ), min( a[i], n ) } );
			}
			else {
				v.push_back( { max( a[i], 1 ), max( a[i], n ) } );
			}
		}

		sort( v.begin(), v.end() );

		int l = 1;

		for ( auto [x, y] : v ) {
			// cout << x << " " << y << "\n";
			if ( x <= l && l <= y ) l++;
		}

		if ( l == n+1 ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}