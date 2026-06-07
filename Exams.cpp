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
	
	// for ( auto [x, y] : v ) cout << x << " " << y << "\n";

	int mn = min( v[0].first, v[0].second );

	for ( int i = 1; i < n; i++ ) {
		auto[x, y] = v[i];
		if ( min( x, y ) >= mn ) mn = min( x, y );
		else mn = max( x, y );
	}

	cout << mn << "\n";

	return 0;
}