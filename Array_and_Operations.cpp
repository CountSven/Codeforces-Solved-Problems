#include<bits/stdc++.h>
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
		vector<int> v(n);

		for ( int i = 0; i < n; i++ ) cin >> v[i];

		sort( v.rbegin(), v.rend() );

		map<int, int> mp;

		for ( int i = 0; i < ( 2 * k ); i++ ) mp[v[i]]++;

		int res = 0;
		
		for ( auto [x, y] : mp ) {
			if ( y > k ) res += y - k;
		}

		for ( int i = 2 * k; i < n; i++ ) res += v[i];

		cout << res << "\n";		
	}

	return 0;
}