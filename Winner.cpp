#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<pair<string, int>> v(n);
	map<string, int> mp1, mp2;

	for ( auto &[x, y] : v ) {
		cin >> x >> y;
		mp1[x] += y;
	}

	int mx = -1e9;

	for ( auto [x, y] : mp1 ) mx = max( mx, y );

	for ( auto [x, y] : v ) {
		mp2[x] += y;
		if ( mp2[x] >= mx && mp1[x] == mx ) {
			cout << x << "\n";
			return 0;
		}
	}

	return 0;
}