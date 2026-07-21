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
		int a[n];

		map<int, int> have, need;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			if ( i < m ) have[a[i]]++;
		}
		for ( int i = 0, x; i < m; i++ ) {
			cin >> x;
			need[x]++;
		}

		multiset<int> missing;

		for ( auto [x, y] : need ) {
			int cur = y - min( y, have[x] );
			while ( cur-- ) missing.insert( x );
		}

		// for ( auto u : missing ) cout << u << " ";
		// cout << "\n";
	
		int cnt = 0;

		if ( m - (int)missing.size() >= k ) cnt++;

		for ( int i = m, j = 0; i < n; i++, j++ ) {
			int val = a[j];
			have[val]--;
			if ( need[val] > have[val] ) missing.insert( val );
			val = a[i];
			have[val]++;
			auto it = missing.find( val );
			if ( it != missing.end() ) missing.erase( it );
			if ( m - (int)missing.size() >= k ) cnt++;
		}

		cout << cnt << "\n";
	}

	return 0;
}