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
		map<int, int> mp;

		for ( int i = 0, x; i < n; i++ ) {
			cin >> x;
			mp[x]++;
		}

		int cnt1 = 0, cnt2 = 0;

		for ( auto [x, y] : mp ) {
			if ( y == 1 ) cnt1++;
			else cnt2++;
		}

		int res = ( ( cnt1 + 1 ) / 2 ) + cnt2;

		cout << res << "\n";
	}

	return 0;
}