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
		string s;
		cin >> s;
		vector<char> v(n);

		for ( int i = 0; i < n; i++ ) v[i] = '+';

		int l = 0, r = n-1, idx = -1;

		sort( s.begin(), s.end() );

		for ( int i = 0; i < k; i++ ) {
			if ( s[i] == '0' ) v[l++] = '-';
			else if ( s[i] == '1' ) v[r--] = '-';
			else {
				idx = i;
				break;
			}
		}

		if ( idx != -1 ) {
			int rem = k - idx;
			int cur = r - l + 1;

			// cout << cur << " " << rem << "\n";

			if ( rem == cur ) {
				while ( l <= r ) {
					v[l++] = '-';
					v[r--] = '-';
				}
			}
			else {
				while ( rem-- ) {
					// cout << l << " " << r << "\n";
					v[l++] = '?';
					v[r--] = '?';
				}
			}
		}

		for ( auto u : v ) cout << u;
		cout << "\n";
	}

	return 0;
}