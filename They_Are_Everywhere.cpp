#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	map<char, int> mp;

	int i = 1;

	for ( char c = 'A'; c <= 'Z'; c++ ) mp[c] = i++;
	for ( char c = 'a'; c <= 'z'; c++ ) mp[c] = i++;

	// for ( auto [x, y] : mp ) cout << x << " " << y << "\n";

	int n;
	string s;
	cin >> n >> s;

	vector<vector<ll>> pref( n+1, vector<ll>( 53, 0 ) );

	set<char> st;

	s = '#' + s;

	for ( int i = 1; i <= n; i++ ) {
		for ( int j = 1; j <= 52; j++ ) pref[i][j] += pref[i-1][j];
		pref[i][mp[s[i]]]++;
		st.insert( s[i] );
	}

	ll res = n;

	for ( int i = 1; i <= n; i++ ) {
		ll l = i, r = n, cur = n;
		while ( l <= r ) {
			ll mid = l + ( r - l ) / 2;
			ll cnt = 0;
			for ( int j = 1; j <= 52; j++ ) {
				if ( pref[mid][j] - pref[i-1][j] >= 1 ) cnt++;
			}
			if ( cnt == st.size() ) {
				cur = mid - i + 1;
				r = mid - 1;
			}
			else l = mid + 1;
		}
		// cout << i  << " " << cur << "\n";
		res = min( res, cur );
	}

	cout << res << "\n";
	
	return 0;
}