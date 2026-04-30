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
		vector<vector<int>> v(n);

		map<int, int> mp;

		for ( int i = 0; i < n; i++ ) {
			int k;
			cin >> k;
			vector<int> tmp(k);

			for ( int j = 0; j < k; j++ ) {
				cin >> tmp[j];
				mp[tmp[j]]++;
			}

			v[i] = tmp;
		}

		int poss = 0;

		for ( int i = 0; i < n; i++ ) {
			int cur = 1;
			for ( auto u : v[i] ) {
				if ( mp[u] == 1 ) {
					cur = 0;
					break;
				}
			}
			if ( cur ) {
				poss = 1;
				break;
			}
		}

		if ( poss ) cout << "Yes" << "\n";
		else cout << "No" << "\n";
	}

	return 0;
}