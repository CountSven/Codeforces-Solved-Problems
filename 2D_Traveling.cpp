#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long n, k, a, b;
		cin >> n >> k >> a >> b;
		vector<pair<long long, pair<long long, long long>>> v(n+1);

		for ( int i = 1; i <= n; i++ ) {
			v[i].first = i;
			cin >> v[i].second.first >> v[i].second.second; 
		}

		// for ( int i = 1; i <= n; i++ ) cout << v[i].first << " " << v[i].second.first << " " << v[i].second.second << "\n";

		long long res = abs( v[a].second.first - v[b].second.first ) + abs( v[a].second.second - v[b].second.second );

		long long start = 2e18, end = 2e18;

		for ( int i = 1; i <= k; i++ ) {
			long long cur1 = abs( v[a].second.first - v[i].second.first ) + abs( v[a].second.second - v[i].second.second );
			long long cur2 = abs( v[b].second.first - v[i].second.first ) + abs( v[b].second.second - v[i].second.second );

			start = min( start, cur1 );
			end = min( end, cur2 );

			if ( a <= k ) start = 0;
			if ( b <= k ) end = 0;
		}

		if ( start != 2e18 && end != 2e18 ) res = min( res, start + end );

		cout << res << "\n";
	}

	return 0;
}