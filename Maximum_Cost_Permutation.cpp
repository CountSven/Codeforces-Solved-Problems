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

		for ( int i = 1; i <= n; i++ ) cin >> a[i];

		map<int, int> mp;

		for ( int i = 1; i <= n; i++ ) mp[i]++;

		for ( int i = 1; i <= n; i++ ) {
			if ( a[i] != 0 ) mp[a[i]]++;
		}

		// for ( auto u : mp ) cout << u.first << " " << u.second << "\n";
		// cout << "\n";

		vector<int> v;

		for ( auto u : mp ) {
			if ( u.second == 1 ) v.push_back( u.first );
		}

		// for ( auto u : v ) cout << u << " ";
		// cout << "\n";

		for ( int i = 1; i <= n; i++ ) {
			if ( a[i] == 0 && i != v.back() ) {
				a[i] = v.back();
				v.pop_back();
			}
		}

		for ( int i = 1; i <= n; i++ ) {
			if ( a[i] == 0 ) {
				a[i] = v.back();
				v.pop_back();
			}
		}

		// for ( int i = 1; i <= n; i++ ) cout << a[i] << " ";
		// cout << "\n";

		int l = 0, r = 0;

		for ( int i = 1; i <= n; i++ ) {
			if ( i != a[i] && l == 0 ) l = i;
			else if ( i != a[i] ) r = i;
		}

		int ans = 0;

		if ( l != 0 ) ans = r - l + 1;

		cout << ans << "\n";
	}

	return 0;
}