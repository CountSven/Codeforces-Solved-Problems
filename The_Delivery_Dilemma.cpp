#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;
		vector<pair<ll, ll>> v(n);

		for ( auto &[x, y] : v ) cin >> x;
		for ( auto &[x, y] : v ) cin >> y;

		sort( v.begin(), v.end() );

		// for ( auto [x, y] : v ) cout << x << " " << y << "\n";

		ll sum = 0, mn = 1e9;

		for ( auto [x, y] : v ) sum += y;

		mn = min( mn, sum );

		for ( auto [x, y] : v ) {
			sum -= y;
			mn = min( mn, max( sum, x ) );
		}

		cout << mn << "\n";
	} 

	return 0;
}