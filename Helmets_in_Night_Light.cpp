#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, p;
		cin >> n >> p;
		vector<pair<int, int>> v(n);

		for ( int i = 0; i < n; i++ ) cin >> v[i].second;
		for ( int i = 0; i < n; i++ ) cin >> v[i].first;

		sort( v.begin(), v.end() );

		for ( int i = 0; i < n; i++ ) v[i].first = min( v[i].first, p );

		int cur = 1, cnt = p;

		for ( int i = 0; i < n; i++ ) {
			int now = min( cur + v[i].second, n );
			
			cnt += ( ( now - cur ) * v[i].first );

			cur = now;
		}

		cout << cnt << "\n";
	}

	return 0;
}