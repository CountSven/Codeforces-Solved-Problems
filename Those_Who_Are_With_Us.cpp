#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n, m;
	cin >> n >> m;
	int a[n][m], mx = 0;

	for ( int i = 0; i < n; i++ ) {
		for ( int j = 0; j < m; j++ ) {
			cin >> a[i][j];
			mx = max( mx, a[i][j] );
		}
	}

	map<int, int> mp;

	for ( int i = 0; i < n; i++ ) {
		for ( int j = 0; j < m; j++ ) {
			if ( a[i][j] == mx ) mp[j]++;
		}
	}

	for ( int i = 0; i < n; i++ ) {
		for ( int j = 0; j < m; j++ ) {
			if ( a[i][j] == mx ) mp[j]--;
			if ( !mp[j] ) mp.erase( j );  
		}

		if ( mp.size() <= 1 ) {
			cout << mx - 1 << "\n";
			return;
		}

		for ( int j = 0; j < m; j++ ) {
			if ( a[i][j] == mx ) mp[j]++;
		}
	}

	cout << mx << "\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) solve();

	return 0;
}