#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, m, k;
		cin >> n >> m >> k;
		int a[n], b[m];
		set<int> s1, s2, s3;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			if ( a[i] <= k ) {
				s1.insert( a[i] );
				s3.insert( a[i] );
			}
		}

		for ( int i = 0; i < m; i++ ) {
			cin >> b[i];
			if ( b[i] <= k ) {
				s2.insert( b[i] );
				s3.insert( b[i] );
			}
		}

		// for ( auto u : s1 ) cout << u << " ";
		// cout << "\n";
		// for ( auto u : s2 ) cout << u << " ";
		// cout << "\n";
		// for ( auto u : s3 ) cout << u << " ";
		// cout << "\n";

		if ( s1.size() >= k/2 && s2.size() >= k/2 && s3.size() == k ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}