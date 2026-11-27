#include<bits/stdc++.h>
using namespace std;
using ll = long long;

map<ll, vector<ll>> mp;
map<ll, int> vis;
ll res;

void dfs( ll v )
{
	vis[v] = 1;
	for ( auto u : mp[v] ) {
		res = max( res, v + u );
		if ( mp.find( v + u ) == mp.end() ) continue;
		if ( vis[v + u] ) continue;
		dfs( v + u );
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		ll n;
		cin >> n;
		ll a[n+1];

		for ( int i = 1; i <= n; i++ ) {
			cin >> a[i];
			if ( i > 1 ) mp[a[i] + i - 1].push_back( i - 1 );
		}

		res = n;

		if ( mp.find( n ) != mp.end() ) dfs( n );
	
		cout << res << "\n";

		mp.clear();
		vis.clear();
	}

	return 0;
}