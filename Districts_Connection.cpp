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
		vector<int> v(n+1);

		for ( int i = 1; i <= n; i++ ) cin >> v[i];

		int cnt = 0;

		vector<pair<int, int>> res;

		map<int, int> mp;
		
		for ( int i = 1; i+1 <= n; i++ ) {
			for ( int j = i+1; j <= n; j++ ) {
				if ( cnt == n - 1 ) break;
				if ( v[i] != v[j] ) { 
					if ( mp.size() < n ) {
						if ( mp.find( i ) == mp.end() || mp.find( j ) == mp.end() ) {
							res.push_back( { i, j } );
							cnt++;
							mp[i] = 1;
							mp[j] = 1;
						}
					}
					else {
						res.push_back( { i, j } );
						cnt++;
						mp[i] = 1;
						mp[j] = 1;
					}
				}
			}
		}

		if ( cnt < n - 1 ) cout << "NO" << "\n";
		else {
			cout << "YES" << "\n";
			for ( auto u : res ) cout << u.first << " " << u.second << "\n";
		}
	}

	return 0;
}