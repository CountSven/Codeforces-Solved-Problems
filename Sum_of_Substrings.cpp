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
		string s;
		cin >> n >> k >> s;

		int cnt = 0, l = n-1, r = 0;

		for ( int i = 0; i < n; i++ ) {
			if ( s[i] == '1' ) {
				cnt++;
				l = min( l, i );
				r = max( r, i );
			}
		}

		int res = 0;

		if ( cnt && ( n - 1 - r <= k ) ) {
			k -= n - 1 - r;
			res += 1;
			cnt--;
		}

		if ( cnt && ( l <= k ) ) {
			k -= l;
			res += 10;
			cnt--;
		}

		res += ( cnt * 11 );

		cout << res << "\n";
	}

	return 0;
}