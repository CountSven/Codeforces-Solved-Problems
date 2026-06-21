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
		vector<ll> u(n), s(n), res(n + 1, 0LL);

		map<int, vector<ll>> mp;

		for ( int i = 0; i < n; i++ ) cin >> u[i];
		for ( int i = 0; i < n; i++ ) {
			cin >> s[i];
			mp[u[i]].push_back( s[i] );
		}

		for ( auto &[u, v] : mp ) {
			sort( v.rbegin(), v.rend() );
			for ( int i = 1; i < v.size(); i++ ) v[i] += v[i-1];

			for ( int i = 1; i <= v.size(); i++ ) {
				ll rng = (int)v.size() / i;
				rng *= 1LL * i;
				res[i] += v[rng-1];
			}
		}

		for ( int i = 1; i <= n; i++ ) cout << res[i] << " ";
		cout << "\n";
	}

	return 0;
}