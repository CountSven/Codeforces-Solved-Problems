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
			mp[x]++;
		}
		
		int res = 0, val = ( 1LL << 31 ) - 1;

		for ( auto [x, y] : mp ) {
			if ( ( 2 * x ) == val ) {
				res += ( y / 2 );
				if ( y % 2 ) res++;
			}
			else {
				if ( mp.find( val - x ) != mp.end() ) {
					int mx = max( y, mp[val - x] );
					int mn = min( y, mp[val - x] );
					res += mn;
					res += ( mx - mn );
					mp[x] = 0;
					mp[val - x] = 0;
				}
				else res += y;
			}
		}

		cout << res << "\n";
	}

	return 0;
}