#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<pair<int, int>> v(n);

	for ( int i = 0; i < n; i++ ) cin >> v[i].first >> v[i].second;

	sort( v.begin(), v.end() );

	// for ( auto u : v ) cout << u.first << " " << u.second << "\n";

	int mx = v[0].second, f = 0;

	for ( int i = 1; i < n; i++ ) {
		if ( v[i].second < mx ) {
			f = 1;
			break;
		}

		mx = max( mx, v[i].second );
	}

	if ( f ) cout << "Happy Alex" << "\n";
	else cout << "Poor Alex" << "\n";

	return 0;
}