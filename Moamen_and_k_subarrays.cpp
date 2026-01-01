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
		vector<int> v(n+1), s(n+1);

		for ( int i = 0; i < n; i++ ) {
			cin >> v[i];
			s[i] = v[i];
		}

		v[n] = INT_MAX;
		s[n] = INT_MAX;

		sort( s.begin(), s.end() );

		map<int, int> mp;

		for ( int i = 0; i < n; i++ ) mp[s[i]] = s[i+1];

		int cnt = 1;
		
		for ( int i = 0; i < n-1; i++ ) {
			if ( mp[v[i]] != v[i+1] ) cnt++;
		}

		// cout << cnt << "\n";

		if ( cnt <= k ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}