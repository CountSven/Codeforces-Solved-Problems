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

		for ( int i = 0; i < n; i++ ) {
			int x;
			cin >> x;
			for ( int j = 2; j * j <= x; j++ ) {
				while ( x % j == 0 ) {
					mp[j]++;
					x /= j;
				}
			}
			if ( x > 1 ) mp[x]++;
		}

		int f = 0;

		for ( auto [x, y] : mp ) {
			if ( y % n ) {
				f = 1;
				break;
			}
		}

		if ( !f ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}