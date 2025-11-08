#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, q;
		cin >> n >> q;
		int a[n+1];

		map<int, int> mp;

		for ( int i = 1; i <= n; i++ ) {
			cin >> a[i];
			if ( a[i] != 0 ) mp[a[i]]++;
		}

		while ( q-- ) {
			int tp;
			cin >> tp; 

			if ( tp == 1 ) {
				int pos, val;
				cin >> pos >> val;
				if ( a[pos] != 0 ) mp[a[pos]]--;
				if ( mp[a[pos]] == 0 ) mp.erase( a[pos] );
				
				a[pos] = val;
				if ( val != 0 )  mp[a[pos]]++;

				// for ( auto u : mp ) cout << u.first << " " << u.second << "\n";
				// cout << "\n";
			}
			else cout << mp.size() << "\n";
		}
	}

	return 0;
}