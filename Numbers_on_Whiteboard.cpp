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
		int cur = n;

		vector<pair<int, int>> vii;

		for ( int i = n-1; i >= 1; i-- ) {
			vii.push_back( {cur, i} );
			cur = ( cur + i + 1 ) / 2;
		}

		cout << cur << "\n";

		for ( auto u : vii ) {
			cout << u.first << " " << u.second << "\n";
		}

		vii.clear();
	}

	return 0;
}