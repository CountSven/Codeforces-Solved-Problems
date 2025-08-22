#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	map<pair<int, int>, int> mp;

	while ( n-- ) {
		int h, m;
		cin >> h >> m;
		mp[{h, m}]++;
	}

	// for ( auto u : mp ) cout << u.first.first << " " << u.first.second << " " << u.second << "\n";

	int mx = 0;

	for ( auto u : mp ) mx = max( mx, u.second );

	cout << mx << "\n";

	return 0;
}