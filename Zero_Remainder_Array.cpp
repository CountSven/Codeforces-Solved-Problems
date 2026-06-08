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

		map<int, int> mp;	

		for ( int i = 0; i < n; i++ ) {
			int x;
			cin >> x;
			if ( x % k ) mp[k - ( x % k )]++;
		}

		long long cur = 0;

		for ( auto [x, y] : mp ) cur = max( cur, x + ( ( y - 1 ) * 1LL * k ) + 1 );

		cout << cur << "\n";	
	}

	return 0;
}