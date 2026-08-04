#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, m;
		cin >> n >> m;

		if ( n == 4 ) {
			for ( int i = 1; i <= n; i++ ) {
				for ( int j = 1, x = i; j <= m; j++ ) {
					cout << x << " ";
					x += 4;
				}
				cout << "\n";
			}
			cout << "\n";
			continue;
		}

		vector<vector<int>> v(n);

		int cur = 1;

		for ( int i = 0; i < n; i++ ) {
			vector<int> r;
			for ( int j = 0; j < m; j++ ) r.push_back( cur++ );
			v[i] = r;
		}
	
		for ( int i = 0; i < n; i += 2 ) {
			for ( auto u : v[i] ) cout << u << " ";
			cout << "\n";
		}
		for ( int i = 1; i < n; i += 2 ) {
			for ( auto u : v[i] ) cout << u << " ";
			cout << "\n";
		}
		cout << "\n";
	}

	return 0;
}