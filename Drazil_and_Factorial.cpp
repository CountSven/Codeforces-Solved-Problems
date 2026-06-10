#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	map<int, int> mp, opt;

	int fact = 1;

	for ( int i = 2; i <= 9; i++ ) {
		fact *= i;
		mp[i] = fact;
	}

	// for ( auto [x, y] : mp ) cout << x << " " << y << "\n";

	for ( auto [x, y] : mp ) {
		int val = y, res = 0;
		for ( int i = 9; i >= 2; i-- ) {
			string r = "";
			int tmp = val;
			for ( int j = i; j >= 2; j-- ) {
				int cur = mp[j];
				while ( tmp % cur == 0 ) {
					tmp /= cur;
					r += ( j + '0' );
				}
			}
			// cout << val << " " << r << " " << tmp << "\n";
			if ( tmp == 1 ) {
				int now = stoi( r );
				res = max( res, now );
			}
		}
		opt[x] = res;
	}

	// cout << mp[7] * mp[3] * mp[3] * mp[2] << "\n";

	opt[9] = 7332;

	// for ( auto [x, y] : opt ) cout << x << " " << y << "\n";

	int n;
	string s, ans = "";
	cin >> n >> s;

	for ( int i = 0; i < n; i++ ) {
		if ( s[i] == '0' || s[i] == '1' ) continue;
		int dig = s[i] - '0';
		int x = opt[dig];
		string n = to_string( x );
		ans += n;
	}

	sort( ans.rbegin(), ans.rend() );

	cout << ans << "\n";

	return 0;
}