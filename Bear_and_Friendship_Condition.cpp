#include<bits/stdc++.h>
using namespace std;

const int N = 2e5;

int n, m;
vector<int> par(N), sz(N, 1), cnt(N, 0);

int get( int v )
{
	if ( v == par[v] ) return v;
	else return par[v] = get( par[v] );
}

void unite( int a, int b )
{
	a = get( a );
	b = get( b );
	if ( a != b ) {
		if ( sz[a] < sz[b] ) swap( a, b );
		par[b] = a;
		sz[a] += sz[b];
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> m;

	for ( int i = 1; i <= n; i++ ) par[i] = i;

	while ( m-- ) {
		int u, v;
		cin >> u >> v;
		cnt[u]++;
		cnt[v]++;
		unite( u, v );
	}

	map<int, pair<int, long long>> mp;

	for ( int i = 1; i <= n; i++ ) {
		int cur = get( i );
		mp[cur].first += 1;
		mp[cur].second += cnt[i];
	}

	int f = 0;

	for ( auto [x, y] : mp ) {
		auto [f, s] = y;
		// cout << x << " -> " << f << " " << s << "\n";
		if ( f == 1 ) continue;
		long long req = f * 1LL * ( f - 1 );
		if ( req != s ) {
			cout << "NO" << "\n";
			return 0;
		}
	}

	cout << "YES" << "\n";

	return 0;
}