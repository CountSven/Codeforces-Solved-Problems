#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, q;
	cin >> n >> q;
	int a[n+1];

	map<int, int> mp;

	for ( int i = 1; i <= n; i++ ) {
		cin >> a[i];

		if ( mp.find( a[i] ) == mp.end() ) mp[a[i]] = i;
	}

	// for ( auto u : mp ) cout << u.first << " " << u.second << "\n";

	while ( q-- ) {
		int cur;
		cin >> cur;
		cout << mp[cur] << " ";

		int range = mp[cur];

		for ( auto u : mp ) {
			if ( u.first == cur ) mp[u.first] = 1;
			else {
				if ( mp[u.first] < range ) mp[u.first] = mp[u.first]+1;
			}
		}
	}
	cout << "\n";

	return 0;
}