#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, m, k;
		string s;
		cin >> n >> m >> k >> s;

		s = 'L' + s + 'L';

		int l = 0, f = 0;

		while ( l < s.size() ) {
			if ( s[l] == 'L' ) l++;
			else if ( s[l] == 'W' || s[l] == 'C' ) {
				int cur = 0;

				while ( s[l] == 'W' || s[l] == 'C' ) {
					cur++;
					if ( cur == m ) break;
					else l++;
				}

				while ( s[l] == 'W' ) {
					l++;
					k--;
				}

				if ( s[l] == 'C' || k < 0 ) {
					f = 1;
					break;
				}
			}
		}

		if ( !f ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}