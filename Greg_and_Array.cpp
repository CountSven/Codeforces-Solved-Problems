#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m, k;
	cin >> n >> m >> k;

	vector<ll> v( n+2 ), ops( m+2 ), ext( n+2 );

	for ( int i = 1; i <= n; i++ ) cin >> v[i];

	vector<pair<pair<int, int>, int>> rngs( m+2 );
	
	for ( int i = 1; i <= m; i++ ) {
		cin >> rngs[i].first.first >> rngs[i].first.second >> rngs[i].second;
	}

	while ( k-- ) {
		int x, y;
		cin >> x >> y;
		ops[x]++;
		ops[y + 1]--;
	}

	for ( int i = 1; i <= m; i++ ) ops[i] += ops[i-1];

	// for ( int i = 1; i <= m; i++ ) cout << ops[i] << " ";
	// cout << "\n";		

	for ( int i = 1; i <= m; i++ ) {
		auto [cur, val] = rngs[i];
		auto [l, r] = cur;
		ll add = ops[i] * val;
		ext[l] += add;
		ext[r+1] -= add;
		// cout << l << " " << r << " " << add << "\n";
		// for ( int j = 1; j <= 4; j++ ) cout << ext[j] << " ";
		// cout << "\n";
	}

	for ( int i = 1; i <= n; i++ ) ext[i] += ext[i-1];

	for ( int i = 1; i <= n; i++ ) v[i] += ext[i];

	for ( int i = 1; i <= n; i++ ) cout << v[i] << " ";
	cout << "\n";

	return 0;
}