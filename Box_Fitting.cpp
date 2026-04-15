#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, w;
		cin >> n >> w;
		int a[n];

		map<int, int> mp;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			mp[a[i]]++;
		}

		vector<int> vals, cnts;

		for ( auto [x, y] : mp ) {
			vals.push_back( x );
			cnts.push_back( y );
		}

		// for ( auto u : vals ) cout << u << " ";
		// cout << "\n";
		// for ( auto u : cnts ) cout << u << " ";
		// cout << "\n";

		int tmp = n, h = 0;

		while ( tmp ) {
			h++;
			int cur = w;
			for ( int i = vals.size()-1; i >= 0; i-- ) {
				while ( tmp && cnts[i] && vals[i] <= cur ) {
					cur -= vals[i];
					cnts[i]--;
					tmp--;
				}
			}
		}

		cout << h << "\n";
	}

	return 0;
}