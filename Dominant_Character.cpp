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
		string s;
		cin >> n >> s;

		int sz = 1e9;

		for ( int len = 2; len <= min( 7, n ); len++ ) {
			vector<int> cnt( 3, 0 );
			for ( int i = 0; i < min( len, n ); i++ ) cnt[s[i] - 'a']++;
			if ( cnt[0] > max( cnt[1], cnt[2] ) ) sz = min( sz, len );
			for ( int i = len, j = 0; i < n; i++, j++ ) {
				cnt[s[i] - 'a']++;
				cnt[s[j] - 'a']--;
				if ( cnt[0] > max( cnt[1], cnt[2] ) ) sz = min( sz, len );
			}
		}

		if ( sz == 1e9 ) cout << -1 << "\n";
		else cout << sz << "\n";
	} 

	return 0;
}