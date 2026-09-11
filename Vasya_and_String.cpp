#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	string s;
	cin >> n >> k >> s;

	int l = 1, r = n, res = n;

	while ( l <= r ) {
		int mid = l + ( r - l ) / 2;

		int ca = 0, cb = 0, f = 0;

		for ( int i = 0; i < mid; i++ ) {
			if ( s[i] == 'a' ) ca++;
			else cb++;
		}

		if ( min( ca, cb ) <= k ) f = 1;

		for ( int i = 0, j = mid; j < n; i++, j++ ) {
			if ( s[i] == 'a' ) ca--;
			else cb--;
			if ( s[j] == 'a' ) ca++;
			else cb++;

			if ( f || ( min( ca, cb ) <= k ) ) {
				f = 1;
				break;
			}
		}

		if ( f ) {
			res = mid;
			l = mid + 1;
		}
		else r = mid - 1;
	}

	cout << res << "\n";

	return 0;
}