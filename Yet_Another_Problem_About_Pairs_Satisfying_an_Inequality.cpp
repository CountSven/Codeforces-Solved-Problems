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
		int a[n+1];

		vector<pair<int, int>> v;

		for ( int i = 1; i <= n; i++ ) {
			cin >> a[i];
			if ( a[i] < i ) v.push_back( { a[i], i } );
		}

		sort( v.begin(), v.end() );

		// for ( auto [x, y] : v ) cout << x << " " << y << "\n";
	
		vector<int> val;

		for ( auto [x, y] : v ) val.push_back( x );

		long long cnt = 0;

		for ( auto [x, y] : v ) {
			int cur = upper_bound( val.begin(), val.end(), y ) - val.begin();

			cnt += (int)val.size() - cur;
		}

		cout << cnt << "\n";
	}

	return 0;
}