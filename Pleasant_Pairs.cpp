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
		vector<pair<long long, long long>> v(n);

		for ( int i = 0; i < n; i++ ) {
			cin >> v[i].first;
			v[i].second = i+1;
		}

		sort( v.begin(), v.end() );

		// for ( auto u : v ) cout << u.first << " " << u.second << "\n";

		int cnt = 0;

		for ( int i = 0; i + 1 < n; i++ ) {
			for ( int j = i + 1; j < n; j++ ) {
				if ( ( v[i].first * v[j].first ) > ( ( 2 * n ) - 1 ) ) break;
				else if ( ( v[i].first * v[j].first ) == ( v[i].second + v[j].second ) ) cnt++;
			}
		}

		cout << cnt << "\n";
	}

	return 0;
}