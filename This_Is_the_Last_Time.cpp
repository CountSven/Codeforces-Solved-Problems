#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, k;
		cin >> n >> k;
		vector<pair<int, pair<int, int>>> v(n);

		for ( int i = 0; i < n; i++ ) {
			cin >> v[i].first >> v[i].second.first >> v[i].second.second;
		}

		sort( v.begin(), v.end() );
		
		// for ( auto [x, y] : v ) cout << x << " " << y.first << " " << y.second << "\n";

		for ( auto [x, y] : v ) {
			if ( k >= x && k <= y.first && k < y.second ) k = max( k, y.second ); 
		}

		cout << k << "\n";
	}

	return 0;
}