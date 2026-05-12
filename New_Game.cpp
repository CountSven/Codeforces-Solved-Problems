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

		vector<pair<int, int>> v;

		for ( auto [x, y] : mp ) {
			v.push_back( { x, y } );
			// cout << x << " " << y << "\n";
		}

		int mx = v[0].second, cur = v[0].second, l = 0, r = 0;

		for ( int i = 1; i < v.size(); i++ ) {
			cur += v[i].second;
			r++;
			while ( l < r && ( r - l + 1 > k || v[r].first - v[l].first + 1 > r - l + 1 ) ) cur -= v[l++].second;
			if ( r - l + 1 <= k && v[r].first - v[l].first + 1 <= r - l + 1 ) mx = max( mx, cur );
			// cout << l << " " << r << " " << cur << "\n";
		} 

		cout << mx << "\n";
	}

	return 0;
}