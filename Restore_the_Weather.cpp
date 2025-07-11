#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, k;
		cin >> n >> k;
		vector<pair<int, int>> a, b;

		for ( int i = 0; i < n; i++ ) {
			int val;
			cin >> val;
			a.push_back( { val, i } );
		}
		
		for ( int i = 0; i < n; i++ ) {
			int val;
			cin >> val;
			b.push_back( { val, i } );
		}

		sort(a.begin(), a.end());
		sort(b.begin(), b.end());

		vector<int> cur(n);

		for ( int i = 0; i < n; i++ ) cur[a[i].second] = b[i].first;

		for ( auto u : cur ) cout << u << " ";
		cout << "\n";
	}

	return 0;
}