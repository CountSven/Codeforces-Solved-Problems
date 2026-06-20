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
		vector<pair<int, int>> v(n);

		for ( int i = 0; i < n; i++ ) cin >> v[i].first >> v[i].second;

		int s = 0, e = 1e9, res = 1e9;
		
		while ( s <= e ) {
			int mid = s + ( e - s ) / 2;
			int l = 0, r = 0, f = 0;
		
			for ( auto [curL, curR] : v ) {
				l -= mid;
				r += mid;
				l = max( l, curL );
				r = min( r, curR );
				if ( l > r ) {
					f = 1;
					break;
				}
			}

			if ( !f ) {
				res = mid;
				e = mid - 1;
			}
			else s = mid + 1;
		}

		cout << res << "\n";
	} 

	return 0;
}