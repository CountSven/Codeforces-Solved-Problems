#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	map<int, vector<int>> mp;

	for ( int i = 1; i <= n; i++ ) {
		int x;
		cin >> x;
		mp[x].push_back( i );
	}

	vector<pair<int, int>> v;

	for ( auto [x, y] : mp ) {
		if ( y.size() == 1 ) v.push_back( { x, 0 } );
		else {
			int diff = y[1] - y[0], f = 0;

			for ( int i = 2; i < y.size(); i++ ) {
				if ( y[i] - y[i-1] != diff ) {
					f = 1;
					break;
				}
			}

			if ( !f ) v.push_back( { x, diff } ); 
		}
	}

	cout << v.size() << "\n";
	for ( auto [x, y] : v ) cout << x << " " << y << "\n";
	cout << "\n";

	return 0;
}