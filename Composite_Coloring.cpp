#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> prs = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31 };

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;

		map<int, vector<int>> mp;

		for ( int i = 0; i < n; i++ ) {
			int x;
			cin >> x;
			for ( int j = 0; j < 11; j++ ) {
				if ( x % prs[j] == 0 ) {
					mp[prs[j]].push_back( i );
					break;
				}
			}
		}

		int col = 0;

		vector<pair<int, int>> v;

		for ( auto [x, y] : mp ) {
			col++;
			for ( auto u : y ) v.push_back( { u, col } );
		}

		sort( v.begin(), v.end() );

		cout << col << "\n";
		for ( auto [x, y] : v ) cout << y << " ";
		cout << "\n";
	}

	return 0;
}