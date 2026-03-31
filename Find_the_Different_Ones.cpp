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
		vector<int> a(n+1);

		map<int, vector<int>> mp;

		for ( int i = 1; i <= n; i++ ) {
			cin >> a[i];
			if ( !mp[a[i]].size() ) mp[a[i]].push_back( i );
			else {
				if ( i - mp[a[i]].back() == 1 ) mp[a[i]].pop_back();
				mp[a[i]].push_back( i );
			}
		}

		int q;
		cin >> q;

		while ( q-- ) {
			int l, r;
			cin >> l >> r;

			if ( a[l] != a[r] ) cout << l << " " << r << "\n";
			else {
				int idx = lower_bound( mp[a[l]].begin(), mp[a[l]].end(), l ) - mp[a[l]].begin();
				int val = mp[a[l]][idx];

				if ( l <= val ) val++;

				if ( val < r ) cout << val << " " << r << "\n";
				else cout << -1 << " " << -1 << "\n";
			}
		}
		cout << "\n";
	}

	return 0;
}