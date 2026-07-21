#include<bits/stdc++.h>
using namespace std;

vector<int> have( 1e6+5, 0 ), need( 1e6+5, 0 );

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

		set<int> ele;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			if ( i < m ) have[a[i]]++;
		}
		for ( int i = 0; i < m; i++ ) {
			cin >> b[i];
			need[b[i]]++;
			ele.insert( b[i] );
		}

		multiset<int> missing;

		for ( auto u : ele ) {
			int cur = need[u] - min( need[u], have[u] );
			while ( cur-- ) missing.insert( u );
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
			if ( missing.find( val ) != missing.end() ) {
				missing.erase( missing.find( val ) );
			}
			if ( m - (int)missing.size() >= k ) cnt++;
		}

		cout << cnt << "\n";

		for ( int i = 0; i < n; i++ ) {
			have[a[i]] = 0;
			if ( i < m ) need[b[i]] = 0;
		}
	}

	return 0;
}