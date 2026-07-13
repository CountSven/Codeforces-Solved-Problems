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
		int a[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		vector<map<array<int, 2>, vector<int>>> v(3);

		for ( int i = 0; i+2 < n; i++ ) {
			v[0][{ a[i], a[i+1] }].push_back( a[i+2] );
			v[1][{ a[i], a[i+2] }].push_back( a[i+1] );
			v[2][{ a[i+1], a[i+2] }].push_back( a[i] );
		}

		long long cnt = 0;

		for ( int i = 0; i < 3; i++ ) {
			for ( auto [x, y] : v[i] ) { 
				map<int, int> mp;
				for ( auto u : y ) mp[u]++;
				long long cur = 0;
				for ( auto u : y ) cur += ( y.size() - mp[u] );
				cnt += cur / 2;
			}
		}

		cout << cnt << "\n";
	}

	return 0;
}