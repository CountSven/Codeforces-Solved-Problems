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

		sort( v.begin(), v.end() );
		
		// for ( auto [x, y] : v ) cout << x << " " << y << "\n";
		// cout << "\n";

		int curX = 0, curY = 0, f = 0;

		string s = "";

		for ( auto [x, y] : v ) {
			int remX = x - curX;
			int remY = y - curY;

			if ( remX < 0 || remY < 0 ) {
				f = 1;
				break;
			}

			while ( remX-- ) s += 'R';
			while ( remY-- ) s += 'U';

			curX = x;
			curY = y;
		}

		if ( f ) cout << "NO" << "\n";
		else {
			cout << "YES" << "\n";
			cout << s << "\n";
		} 
	}

	return 0;
}