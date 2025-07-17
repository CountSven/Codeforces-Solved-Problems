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
		int a[n];

		map<int, int> mp;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			mp[a[i]]++;
		}

		int mx = 1;

		for ( auto u : mp ) mx = max( mx, u.second );

		int cur = mx;
		int res = 0;

		while ( cur != n ) {
			res++;
			int x = min( cur, n - cur );
			cur += x;
			res += x;
		}

		cout << res << "\n";
	}

	return 0;
}