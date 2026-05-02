#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, k;
		cin >> n >> k;

		map<int, int> mp;

		for ( int i = 0; i < n; i++ ) {
			int x;
			cin >> x;
			mp[x]++;
		}

		vector<int> v;

		for ( auto [x, y] : mp ) {
			if ( y >= k ) v.push_back( x );
		}

		if ( !v.size() ) cout << -1 << "\n";
		else {
			int resl = v[0], resr = v[0], l = v[0], r = v[0];

			for ( int i = 1; i < v.size(); i++ ) {
				if ( v[i] - v[i-1] > 1 ) {
					if ( r - l + 1 > resr - resl + 1 ) {
						resl = l;
						resr = r;
					}
					l = v[i];
					r = v[i];
				}
				else r++;
			}

			if ( r - l + 1 > resr - resl + 1 ) {
				resl = l;
				resr = r;
			}

			cout << resl << " " << resr << "\n";
		}
	}

	return 0;
}