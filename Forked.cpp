#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int a, b, x1, y1, x2, y2;
		cin >> a >> b >> x1 >> y1 >> x2 >> y2;

		map<pair<int, int>, int> mp;

		mp[{x1 + a, y1 + b}]++;
		mp[{x1 + a, y1 - b}]++;
		mp[{x1 - a, y1 + b}]++;
		mp[{x1 - a, y1 - b}]++;
		mp[{x1 + b, y1 + a}]++;
		mp[{x1 + b, y1 - a}]++;
		mp[{x1 - b, y1 + a}]++;
		mp[{x1 - b, y1 - a}]++;

		mp[{x2 + a, y2 + b}]++;
		mp[{x2 + a, y2 - b}]++;
		mp[{x2 - a, y2 + b}]++;
		mp[{x2 - a, y2 - b}]++;
		mp[{x2 + b, y2 + a}]++;
		mp[{x2 + b, y2 - a}]++;
		mp[{x2 - b, y2 + a}]++;
		mp[{x2 - b, y2 - a}]++;

		int mx = 1;

		for ( auto u : mp ) mx = max( mx, u.second );

		int cnt = 0;

		if ( mx > 1 ) {
			for ( auto u : mp ) {
				if ( u.second == mx ) cnt++;
			}
		}

		// for ( auto u : mp ) cout << u.first.first << " " << u.first.second << " " << u.second << "\n";

		cout << cnt << "\n";
	}

	return 0;
}